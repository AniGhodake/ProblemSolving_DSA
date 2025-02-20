public int[] twoSum(int[] arr, int target) {
Map<Integer, Integer> visited = new HashMap<>();
for(int i = 0; i<arr.length; i++) {
//diff = given target - number given at ith index
int diff = target - arr[i];
// check if found difference is present in the MAP list
if(visited.containsKey(diff)) {
//if difference in map matches with the ith index element in array
return new int[] { i, visited.get(diff) };
}
//add arr element in map to match with future element if forms a pair
visited.put(arr[i],i);
}
//if no matches are found
return new int[] {0, 0};
}
