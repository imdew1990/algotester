# test cases for main.py
import unittest
from main import get_longest_increasing_subsequence

class TestLongestIncreasingSubsequence(unittest.TestCase):
    def test_get_longest_increasing_subsequence(self):
        self.assertEqual(get_longest_increasing_subsequence([1, 2, 3, 4, 5]), 5)
        self.assertEqual(get_longest_increasing_subsequence([5, 4, 3, 2, 1]), 1)
        self.assertEqual(get_longest_increasing_subsequence([1, 2, 3, 2, 1]), 3)
        self.assertEqual(get_longest_increasing_subsequence([1, 2, 3, 2, 1, 4, 5, 6, 7, 8, 9, 10]), 10)
        self.assertEqual(get_longest_increasing_subsequence([1, 2, 3, 2, 1, 4, 5, 6, 7, 8, 9, 10, 2, 3, 4, 5]), 10)
        self.assertEqual(get_longest_increasing_subsequence([1, 2, 3, 2, 1, 4, 5, 6, 7, 8, 9, 10, 2, 3, 4, 5, 1, 2, 3, 4, 5]), 10)
        self.assertEqual(get_longest_increasing_subsequence([1, 2, 3, 2, 1, 4, 5, 6, 7, 8, 9, 10, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1]), 10)
        self.assertEqual(get_longest_increasing_subsequence([1, 2, 3, 2, 1, 4, 5, 6, 7, 8, 9, 10, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2]), 10)
