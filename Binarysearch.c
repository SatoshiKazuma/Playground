#include<stdio.h>
int main(){
    int search_element, array_size;
    printf("Enter the array size: ");
    scanf("%d", &array_size);
    int array[array_size];
    printf("Enter the array elements.\n");
    for (int i = 0; i < array_size; i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d",&array[i]);
    }
    printf("Array input complete.\n\nEnter the search element.\n");
    scanf(" %d",&search_element);
    printf("looking for %d in array\n",search_element);
    int mid_value, lower_limit, higher_limit, location=-1;
    //look for the mid_value element and see if it matches and if it does then good or else move the search area from that mid_value element to either the start or end depending on whether the search element is greater or lesser than the mid_value. keep doing this till you end up with the search element as the mid_value.
    lower_limit=0;
    higher_limit=array_size-1;
    while (lower_limit<=higher_limit)
    {
        mid_value=((lower_limit+higher_limit)/2);
        printf("middle value calulated as: %d\n",mid_value);
        if (array[mid_value]==search_element)
        {
            location = mid_value;
            printf("Search element %d, found at index %d\n",search_element,location);
            break;
        }
        else if (array[mid_value]> search_element)
        {
            higher_limit=mid_value-1;
            printf("search element lower than middle value %d, setting higher limit to %d\n",array[mid_value],higher_limit);
        }
        else
        {
            lower_limit=mid_value+1;
            printf("search element higher than middle value %d, setting lower limit to %d\n", array[mid_value], lower_limit);
        }
        
    }
    if (location==-1)
    {
        printf("Search element %d was not found in the search area\n",search_element);
    }
    
}