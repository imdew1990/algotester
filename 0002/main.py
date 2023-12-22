
# function to get the longest increasing subsequence
def get_longest_increasing_subsequence(array: list, array_len: int):
  seqence_len = 0
  # get len the longest increasing subsequence
  for index in range(1, array_len):
    if array[index] > array [index - 1]:
      seqence_len += 1
    else:
      seqence_len = 0
  return seqence_len


if __name__ == '__main__':
  array_len = int(input())
  array = list(map(int, input().split()))

  result = get_longest_increasing_subsequence(array, array_len)
