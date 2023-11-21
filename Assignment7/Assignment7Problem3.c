void fun2(int n);

int main(int argc, char *argv[])
{
  int n = 10;
  fun2(10);
}

void fun2(int n)
{
  if(n == 0) {
    return;
  }
  fun2(n/2);
  printf("%d ", n%2);
}
