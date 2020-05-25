#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 10000

typedef long long int llint;


struct SizedArray {
	float *data;
	int length;
};


struct SizedArray toSizedArray(char *line) {
	float *data = malloc(MAX_SIZE * sizeof(float));
	char *token = strtok(line, " ");

	int i = 0;
	while (token != NULL) {
		data[i] = (float) atoll(token);
		token = strtok(NULL, " ");
		i++;
	}

	int length = i;
	struct SizedArray s_arr;

	s_arr.data = data;
	s_arr.length = length;

	return s_arr;
}


float avg_temperature(float arr[], int len) {
	float summary = 0.0;

	for (int i = 0; i < len; i++) {
		summary += arr[i];
	}

	return summary / (float) len;
}


struct SizedArray daily_temperatures(int hours){
	char curr_info[10000];
	struct SizedArray result;
	float arr[hours];

	for (int i = 0; i < hours; i++) {
		printf("Hour %d:", i);
		scanf("\n%[^\n]", curr_info);

		struct SizedArray sized_array = toSizedArray(curr_info);
		float *curr_arr = sized_array.data;
		int curr_len = sized_array.length;

		float avg_t = avg_temperature(curr_arr, curr_len);
		arr[i] = avg_t;
	}

	result.data = arr;
	result.length = hours;

	return result;
}


void hour_report(int hour, float t){
	printf("Average temperature at %d: %f\n", hour, t);
}


void procedure(int day, int hours){
	float *temperatures = daily_temperatures(hours).data;

	printf("\nDay %d.\n", day);
	for (int h = 0; h < hours; h++){
		hour_report(h, temperatures[h]);
	}
	printf("\n");
}


int is_number(char inp[]){
	for (int c = 0; c < strlen(inp); c++){
		if (!(isdigit(inp[c])))
			return 0;
	}
	return 1;
}


int main() {
	llint N, M;
	llint day = 1;
	char m_in[20];

	printf("Number of hours will be monitoring (N):");
	scanf("%d", &N);
	procedure(day, N);
	day += 1;


	printf("\nExit:\t\ttype something, except the numbers");
	printf("\nContinue:\ttype number M:");
	getchar();
	scanf("%[^\n]", m_in);
	printf("\n");

	if (is_number(m_in) == 1){
		M = atoll(m_in);
		for (llint m = 0; m < M; m++){
			procedure(day, N);
			day += 1;
		}
	}

	return 0;
}
