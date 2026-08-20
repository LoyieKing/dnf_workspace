# ChildElement

`_ZNK11TiXmlHandle12ChildElementEPKci`

`TiXmlHandle::ChildElement(char const*, int) const`

| 类 | 地址 |
|---|---|
| `TiXmlHandle` | `0x087e1f90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e1f90  _ZNK11TiXmlHandle12ChildElementEPKci
#           TiXmlHandle::ChildElement(char const*, int) const
# range [0x087e1f90, 0x087e20aa]
087e1f90 +0x000:  push   %ebp
087e1f91 +0x001:  mov    %esp,%ebp
087e1f93 +0x003:  push   %edi
087e1f94 +0x004:  push   %esi
087e1f95 +0x005:  push   %ebx
087e1f96 +0x006:  sub    $0x1c,%esp
087e1f99 +0x009:  mov    0xc(%ebp),%eax
087e1f9c +0x00c:  mov    0x10(%ebp),%esi
087e1f9f +0x00f:  mov    (%eax),%eax
087e1fa1 +0x011:  test   %eax,%eax
087e1fa3 +0x013:  je     087e1ff2 <+0x62>
087e1fa5 +0x015:  mov    0x18(%eax),%ebx
087e1fa8 +0x018:  test   %ebx,%ebx
087e1faa +0x01a:  jne    087e1fb7 <+0x27>
087e1fac +0x01c:  jmp    087e1ff2 <+0x62>
087e1fae +0x01e:  xchg   %ax,%ax
087e1fb0 +0x020:  mov    0x28(%ebx),%ebx
087e1fb3 +0x023:  test   %ebx,%ebx
087e1fb5 +0x025:  je     087e1ff2 <+0x62>
087e1fb7 +0x027:  mov    0x20(%ebx),%eax
087e1fba +0x02a:  mov    %esi,0x4(%esp)
087e1fbe +0x02e:  mov    %eax,(%esp)
087e1fc1 +0x031:  call   0807e4e0 <_init+0xdd8>
087e1fc6 +0x036:  test   %eax,%eax
087e1fc8 +0x038:  jne    087e1fb0 <+0x20>
087e1fca +0x03a:  mov    (%ebx),%eax
087e1fcc +0x03c:  mov    %ebx,(%esp)
087e1fcf +0x03f:  call   *0x14(%eax)
087e1fd2 +0x042:  test   %eax,%eax
087e1fd4 +0x044:  je     087e1feb <+0x5b>
087e1fd6 +0x046:  jmp    087e2005 <+0x75>
087e1fd8 +0x048:  mov    0x20(%ebx),%eax
087e1fdb +0x04b:  mov    %esi,0x4(%esp)
087e1fdf +0x04f:  mov    %eax,(%esp)
087e1fe2 +0x052:  call   0807e4e0 <_init+0xdd8>
087e1fe7 +0x057:  test   %eax,%eax
087e1fe9 +0x059:  je     087e1fca <+0x3a>
087e1feb +0x05b:  mov    0x28(%ebx),%ebx
087e1fee +0x05e:  test   %ebx,%ebx
087e1ff0 +0x060:  jne    087e1fd8 <+0x48>
087e1ff2 +0x062:  mov    0x8(%ebp),%eax
087e1ff5 +0x065:  movl   $0x0,(%eax)
087e1ffb +0x06b:  add    $0x1c,%esp
087e1ffe +0x06e:  pop    %ebx
087e1fff +0x06f:  pop    %esi
087e2000 +0x070:  pop    %edi
087e2001 +0x071:  pop    %ebp
087e2002 +0x072:  ret    $0x4
087e2005 +0x075:  mov    (%ebx),%eax
087e2007 +0x077:  mov    %ebx,(%esp)
087e200a +0x07a:  call   *0x14(%eax)
087e200d +0x07d:  test   %eax,%eax
087e200f +0x07f:  je     087e1ff2 <+0x62>
087e2011 +0x081:  xor    %edi,%edi
087e2013 +0x083:  cmpl   $0x0,0x14(%ebp)
087e2017 +0x087:  jle    087e208f <+0xff>
087e2019 +0x089:  mov    0x28(%eax),%ebx
087e201c +0x08c:  test   %ebx,%ebx
087e201e +0x08e:  jne    087e202f <+0x9f>
087e2020 +0x090:  jmp    087e1ff2 <+0x62>
087e2022 +0x092:  lea    0x0(%esi),%esi
087e2028 +0x098:  mov    0x28(%ebx),%ebx
087e202b +0x09b:  test   %ebx,%ebx
087e202d +0x09d:  je     087e1ff2 <+0x62>
087e202f +0x09f:  mov    0x20(%ebx),%eax
087e2032 +0x0a2:  mov    %esi,0x4(%esp)
087e2036 +0x0a6:  mov    %eax,(%esp)
087e2039 +0x0a9:  call   0807e4e0 <_init+0xdd8>
087e203e +0x0ae:  test   %eax,%eax
087e2040 +0x0b0:  jne    087e2028 <+0x98>
087e2042 +0x0b2:  lea    0x0(%esi),%esi
087e2048 +0x0b8:  mov    (%ebx),%eax
087e204a +0x0ba:  mov    %ebx,(%esp)
087e204d +0x0bd:  call   *0x14(%eax)
087e2050 +0x0c0:  test   %eax,%eax
087e2052 +0x0c2:  je     087e206b <+0xdb>
087e2054 +0x0c4:  jmp    087e2077 <+0xe7>
087e2056 +0x0c6:  xchg   %ax,%ax
087e2058 +0x0c8:  mov    0x20(%ebx),%eax
087e205b +0x0cb:  mov    %esi,0x4(%esp)
087e205f +0x0cf:  mov    %eax,(%esp)
087e2062 +0x0d2:  call   0807e4e0 <_init+0xdd8>
087e2067 +0x0d7:  test   %eax,%eax
087e2069 +0x0d9:  je     087e2048 <+0xb8>
087e206b +0x0db:  mov    0x28(%ebx),%ebx
087e206e +0x0de:  test   %ebx,%ebx
087e2070 +0x0e0:  jne    087e2058 <+0xc8>
087e2072 +0x0e2:  jmp    087e1ff2 <+0x62>
087e2077 +0x0e7:  mov    (%ebx),%eax
087e2079 +0x0e9:  add    $0x1,%edi
087e207c +0x0ec:  mov    %ebx,(%esp)
087e207f +0x0ef:  call   *0x14(%eax)
087e2082 +0x0f2:  test   %eax,%eax
087e2084 +0x0f4:  je     087e1ff2 <+0x62>
087e208a +0x0fa:  cmp    %edi,0x14(%ebp)
087e208d +0x0fd:  jg     087e2019 <+0x89>
087e208f +0x0ff:  test   %eax,%eax
087e2091 +0x101:  je     087e1ff2 <+0x62>
087e2097 +0x107:  mov    0x8(%ebp),%edx
087e209a +0x10a:  mov    %eax,(%edx)
087e209c +0x10c:  mov    %edx,%eax
087e209e +0x10e:  jmp    087e1ffb <+0x6b>
087e20a3 +0x113:  nop
087e20a4 +0x114:  lea    0x0(%esi),%esi
087e20aa +0x11a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// TiXmlHandle::ChildElement @ 0x87e1f90

/* WARNING: Variable defined which should be unmapped: param_1 */
/* TiXmlHandle::ChildElement(char const*, int) const */

char * TiXmlHandle::ChildElement(char *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *in_stack_0000000c;
  int in_stack_00000010;
  
  if (*(int *)param_2 != 0) {
    for (piVar2 = *(int **)(*(int *)param_2 + 0x18); piVar2 != (int *)0x0;
        piVar2 = (int *)piVar2[10]) {
      iVar1 = strcmp((char *)piVar2[8],in_stack_0000000c);
      if (iVar1 == 0) goto LAB_087e1fca;
    }
  }
  goto LAB_087e1ff2;
LAB_087e1fca:
  while (iVar1 = (**(code **)(*piVar2 + 0x14))(piVar2), iVar1 == 0) {
    do {
      piVar2 = (int *)piVar2[10];
      if (piVar2 == (int *)0x0) goto LAB_087e1ff2;
      iVar1 = strcmp((char *)piVar2[8],in_stack_0000000c);
    } while (iVar1 != 0);
  }
  iVar1 = (**(code **)(*piVar2 + 0x14))(piVar2);
  if (iVar1 != 0) {
    iVar3 = 0;
    if (0 < in_stack_00000010) {
      do {
        piVar2 = *(int **)(iVar1 + 0x28);
        while( true ) {
          if (piVar2 == (int *)0x0) goto LAB_087e1ff2;
          iVar1 = strcmp((char *)piVar2[8],in_stack_0000000c);
          if (iVar1 == 0) break;
          piVar2 = (int *)piVar2[10];
        }
        while (iVar1 = (**(code **)(*piVar2 + 0x14))(piVar2), iVar1 == 0) {
          do {
            piVar2 = (int *)piVar2[10];
            if (piVar2 == (int *)0x0) goto LAB_087e1ff2;
            iVar1 = strcmp((char *)piVar2[8],in_stack_0000000c);
          } while (iVar1 != 0);
        }
        iVar3 = iVar3 + 1;
        iVar1 = (**(code **)(*piVar2 + 0x14))(piVar2);
        if (iVar1 == 0) goto LAB_087e1ff2;
      } while (iVar3 < in_stack_00000010);
    }
    if (iVar1 != 0) {
      *(int *)param_1 = iVar1;
      return param_1;
    }
  }
LAB_087e1ff2:
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  return param_1;
}
```
