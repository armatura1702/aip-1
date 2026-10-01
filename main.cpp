int ** convert(const int * t, size_t n, const size_t * lns, size_t rows)
{
  int ** res = new int*[rows];
  size_t k = 0;
  for (size_t i = 0; i < rows; ++i)
  {
    res[i] = new int[lns[i]];
    for (size_t j = 0; j < lns[i]; ++j)
    {
      res[i][j] = t[k++];
    }
  }
  return res;
}
