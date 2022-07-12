//irerative

function binarySearch(arr, target){
  
    let start = 0;
    let end = arr.length - 1;

    while (start <= end) {
        let middle =Math.floor((start + end) / 2);

        if (arr[middle] === target) {
            return middle;
        } else if (arr[middle] < target) {
            start = middle + 1;
        } else {
            end = middle - 1;
        }
    }
    return -1;
}

console.log(binarySearch([1,2,3,4,5,6,7,8],6))

//recursive

function binearySearch(arr, key, start, end) {
      
    if (start > end) return false;

    let mid=Math.floor((start + end)/2);

    if (arr[mid]=== key) return mid;

    if(arr[mid] > key)
        return binearySearch(arr, key, start, mid-1);
    else
        return binearySearch(arr, key, mid+1, end);
}


  let arr=[1,2,3,4,5,6];
  
console.log(binearySearch(arr,3,0,arr.length-1))


