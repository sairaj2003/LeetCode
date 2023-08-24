int* gradingStudents(int grades_count, int* grades, int* result_count) 
{
    int* roundedGrades = (int*)malloc(grades_count * sizeof(int));

    for (int i = 0; i < grades_count; i++) 
    {
        int nextMultipleOf5 = ((grades[i] + 4) / 5) * 5;
        int diff = nextMultipleOf5 - grades[i];

        if (grades[i] < 38 || diff >= 3) 
        {
            roundedGrades[i] = grades[i];
        } 
        else 
        {
            roundedGrades[i] = nextMultipleOf5;
        }
    }

    *result_count = grades_count;
    return roundedGrades;
}
