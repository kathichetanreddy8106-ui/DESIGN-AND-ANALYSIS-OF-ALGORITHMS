#include &lt;stdio.h&gt;

int main() {
int a[] = {10, 20, 30, 40, 50};
int key = 30;
int i;

for (i = 0; i &lt; 5; i++) {
if (a[i] == key) {

printf(&quot;element found at index %d&quot;, i);
return 0;
}
}

printf(&quot;element not found&quot;);
return 0;
}
