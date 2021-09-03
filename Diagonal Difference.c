int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
      int result, primary_diag = 0, secondary_diag = 0;
     for(int i= 0; i< arr_rows; i++){
         primary_diag = primary_diag + arr[i][i];
           for(int j = 0; j< arr_columns; j++){
               if ( i + j == arr_columns - 1)
                 secondary_diag = secondary_diag + arr[i][j];    
            } 
     }
    
      result =  primary_diag - secondary_diag;
      if (result < 0)
          return result * (-1);
      else
        return result;
    
}
