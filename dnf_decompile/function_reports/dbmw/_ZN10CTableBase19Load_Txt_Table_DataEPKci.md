# _ZN10CTableBase19Load_Txt_Table_DataEPKci

`CTableBase::Load_Txt_Table_Data(char const*, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x806b518` | `0xda` | `0x80e27e8` | `0xdf` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,63 +1,65 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x428,%esp
 movl   $0x0,-0x10(%ebp)
 movl   $"rb",0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <fopen>
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
 sete   %al
 test   %al,%al
-je     <T> <_ZN10CTableBase19Load_Txt_Table_DataEPKci+0x86>
+je     <T> <_ZN10CTableBase19Load_Txt_Table_DataEPKci+0x8b>
 mov    $0xffffffff,%eax
-jmp    <T> <_ZN10CTableBase19Load_Txt_Table_DataEPKci+0xd8>
+jmp    <T> <_ZN10CTableBase19Load_Txt_Table_DataEPKci+0xdd>
 movzbl -0x410(%ebp),%eax
 cmp    $0x23,%al
-je     <T> <_ZN10CTableBase19Load_Txt_Table_DataEPKci+0x85>
+je     <T> <_ZN10CTableBase19Load_Txt_Table_DataEPKci+0x8a>
 mov    -0x10(%ebp),%eax
 cmp    0x10(%ebp),%eax
 jl     <T> <_ZN10CTableBase19Load_Txt_Table_DataEPKci+0x58>
 mov    $0xfffffffe,%eax
-jmp    <T> <_ZN10CTableBase19Load_Txt_Table_DataEPKci+0xd8>
+jmp    <T> <_ZN10CTableBase19Load_Txt_Table_DataEPKci+0xdd>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 add    $0xc,%eax
 mov    (%eax),%edx
 mov    -0x10(%ebp),%eax
 mov    %eax,0x8(%esp)
 lea    -0x410(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
+test   %eax,%eax
+setne  %al
 test   %al,%al
-je     <T> <_ZN10CTableBase19Load_Txt_Table_DataEPKci+0x86>
+je     <T> <_ZN10CTableBase19Load_Txt_Table_DataEPKci+0x8b>
 addl   $0x1,-0x10(%ebp)
-jmp    <T> <_ZN10CTableBase19Load_Txt_Table_DataEPKci+0x86>
+jmp    <T> <_ZN10CTableBase19Load_Txt_Table_DataEPKci+0x8b>
 nop
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <feof>
 test   %eax,%eax
-jne    <T> <_ZN10CTableBase19Load_Txt_Table_DataEPKci+0xbd>
+jne    <T> <_ZN10CTableBase19Load_Txt_Table_DataEPKci+0xc2>
 mov    -0xc(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x400,0x4(%esp)
 lea    -0x410(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <fgets>
 test   %eax,%eax
-je     <T> <_ZN10CTableBase19Load_Txt_Table_DataEPKci+0xbd>
+je     <T> <_ZN10CTableBase19Load_Txt_Table_DataEPKci+0xc2>
 mov    $0x1,%eax
-jmp    <T> <_ZN10CTableBase19Load_Txt_Table_DataEPKci+0xc2>
+jmp    <T> <_ZN10CTableBase19Load_Txt_Table_DataEPKci+0xc7>
 mov    $0x0,%eax
 test   %al,%al
 jne    <T> <_ZN10CTableBase19Load_Txt_Table_DataEPKci+0x3b>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <fclose>
 mov    -0x10(%ebp),%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CTableBase::Load_Txt_Table_Data(char const*, int) */

int __thiscall
CTableBase::_ZN10CTableBase19Load_Txt_Table_DataEPKci(CTableBase *this,char *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char local_414 [1024];
  int local_14;
  FILE *local_10;
  
  local_14 = 0;
  local_10 = fopen(param_1,"rb");
  if (local_10 == (FILE *)0x0) {
    local_14 = -1;
  }
  else {
    while( true ) {
      iVar3 = feof(local_10);
      if ((iVar3 == 0) && (pcVar4 = fgets(local_414,0x400,local_10), pcVar4 != (char *)0x0)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (!bVar1) break;
      if (local_414[0] != '#') {
        if (param_2 <= local_14) {
          return -2;
        }
        cVar2 = (**(code **)(*(int *)this + 0xc))(this,local_414,local_14);
        if (cVar2 != '\0') {
          local_14 = local_14 + 1;
        }
      }
    }
    fclose(local_10);
  }
  return local_14;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFTableBase.cpp](source/DNFServer/GameServer/DBMW/DNFTableBase.cpp)（约第 29 行）：

```cpp
int CTableBase::Load_Txt_Table_Data(const char* fileName, int idx)
{
    int count = 0;
    FILE* f;
    if ((f = fopen(fileName, "rb")) == NULL)
        return -1;
    char buf[0x400];
    while (!feof(f) && fgets(buf, 0x400, f))
    {
        if (buf[0] == '#')
            continue;
        if (count >= idx)
            return -2;
        if (Parse_Table(buf, count))
            count++;
    }
    fclose(f);
    return count;
}
```
