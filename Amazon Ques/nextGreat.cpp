void findNext(char number[], int n) 
{ 
    int i, j; 
    for (i = n-1; i > 0; i--) 
        if (number[i] > number[i-1]) 
           break; 
    if (i==0) 
    { 
        cout << "Next number is not possible"; 
        return; 
    } 

    int x = number[i-1], smallest = i; 
    for (j = i+1; j < n; j++) 
        if (number[j] > x && number[j] < number[smallest]) 
            smallest = j; 
  
    swap(&number[smallest], &number[i-1]); 
    sort(number + i, number + n); 
  
    cout << "Next number with same set of digits is " << number; 
    return; 
} 