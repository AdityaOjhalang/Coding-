for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			int sum=0;
			for(int k=i;k<j;k++){
				sum = sum + arr[k];
			}
			if(sum>maxsum)
			maxsum = sum;

		}
	}
	cout<<maxsum;