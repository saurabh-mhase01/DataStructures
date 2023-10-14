
void addUniqueElement(int *arr,int *urr,int size,int size2){
    int index =0;
    for(int j=0;j<size;j++){
        int flag =0;
        for(int k=0;k<index;k++){
            if(arr[j]==urr[k]){
                flag =1;
                break;
            }
            if(flag ==0){
                arr[index++]=arr[j];
            }
        }

    }
}