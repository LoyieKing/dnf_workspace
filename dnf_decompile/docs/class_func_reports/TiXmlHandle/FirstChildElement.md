# FirstChildElement

`_ZNK11TiXmlHandle17FirstChildElementEv`

`TiXmlHandle::FirstChildElement() const`

| 类 | 地址 |
|---|---|
| `TiXmlHandle` | `0x087e1920` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e1920  _ZNK11TiXmlHandle17FirstChildElementEv
#           TiXmlHandle::FirstChildElement() const
# range [0x087e1920, 0x087e1989]
087e1920 +0x00:  push   %ebp
087e1921 +0x01:  mov    %esp,%ebp
087e1923 +0x03:  push   %esi
087e1924 +0x04:  push   %ebx
087e1925 +0x05:  sub    $0x10,%esp
087e1928 +0x08:  mov    0xc(%ebp),%eax
087e192b +0x0b:  mov    0x8(%ebp),%esi
087e192e +0x0e:  mov    (%eax),%eax
087e1930 +0x10:  test   %eax,%eax
087e1932 +0x12:  je     087e1970 <+0x50>
087e1934 +0x14:  mov    0x18(%eax),%ebx
087e1937 +0x17:  test   %ebx,%ebx
087e1939 +0x19:  jne    087e1947 <+0x27>
087e193b +0x1b:  jmp    087e1970 <+0x50>
087e193d +0x1d:  lea    0x0(%esi),%esi
087e1940 +0x20:  mov    0x28(%ebx),%ebx
087e1943 +0x23:  test   %ebx,%ebx
087e1945 +0x25:  je     087e1970 <+0x50>
087e1947 +0x27:  mov    (%ebx),%eax
087e1949 +0x29:  mov    %ebx,(%esp)
087e194c +0x2c:  call   *0x14(%eax)
087e194f +0x2f:  test   %eax,%eax
087e1951 +0x31:  je     087e1940 <+0x20>
087e1953 +0x33:  mov    (%ebx),%eax
087e1955 +0x35:  mov    %ebx,(%esp)
087e1958 +0x38:  call   *0x14(%eax)
087e195b +0x3b:  test   %eax,%eax
087e195d +0x3d:  je     087e1970 <+0x50>
087e195f +0x3f:  mov    %eax,(%esi)
087e1961 +0x41:  add    $0x10,%esp
087e1964 +0x44:  mov    %esi,%eax
087e1966 +0x46:  pop    %ebx
087e1967 +0x47:  pop    %esi
087e1968 +0x48:  pop    %ebp
087e1969 +0x49:  ret    $0x4
087e196c +0x4c:  lea    0x0(%esi,%eiz,1),%esi
087e1970 +0x50:  movl   $0x0,(%esi)
087e1976 +0x56:  mov    %esi,%eax
087e1978 +0x58:  add    $0x10,%esp
087e197b +0x5b:  pop    %ebx
087e197c +0x5c:  pop    %esi
087e197d +0x5d:  pop    %ebp
087e197e +0x5e:  ret    $0x4
087e1981 +0x61:  nop
087e1982 +0x62:  lea    0x0(%esi,%eiz,1),%esi
087e1989 +0x69:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TiXmlHandle::FirstChildElement @ 0x87e1920

/* TiXmlHandle::FirstChildElement() const */

int * TiXmlHandle::FirstChildElement(void)

{
  int *piVar1;
  int iVar2;
  int *in_stack_00000004;
  int *in_stack_00000008;
  
  if (*in_stack_00000008 != 0) {
    for (piVar1 = *(int **)(*in_stack_00000008 + 0x18); piVar1 != (int *)0x0;
        piVar1 = (int *)piVar1[10]) {
      iVar2 = (**(code **)(*piVar1 + 0x14))(piVar1);
      if (iVar2 != 0) {
        iVar2 = (**(code **)(*piVar1 + 0x14))(piVar1);
        if (iVar2 != 0) {
          *in_stack_00000004 = iVar2;
          return in_stack_00000004;
        }
        break;
      }
    }
  }
  *in_stack_00000004 = 0;
  return in_stack_00000004;
}
```
