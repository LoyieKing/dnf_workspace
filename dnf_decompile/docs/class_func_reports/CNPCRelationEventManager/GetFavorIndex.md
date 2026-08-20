# GetFavorIndex

`_ZN24CNPCRelationEventManager13GetFavorIndexEPKc`

`CNPCRelationEventManager::GetFavorIndex(char const*)`

| 类 | 地址 |
|---|---|
| `CNPCRelationEventManager` | `0x0890d3d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0890d3d0  _ZN24CNPCRelationEventManager13GetFavorIndexEPKc
#           CNPCRelationEventManager::GetFavorIndex(char const*)
# range [0x0890d3d0, 0x0890d44e]
0890d3d0 +0x00:  push   %ebp
0890d3d1 +0x01:  mov    %esp,%ebp
0890d3d3 +0x03:  sub    $0x18,%esp
0890d3d6 +0x06:  movl   $0xa,0x8(%esp)
0890d3de +0x0e:  mov    0xc(%ebp),%eax
0890d3e1 +0x11:  mov    %eax,0x4(%esp)
0890d3e5 +0x15:  movl   $"[good]",(%esp)
0890d3ec +0x1c:  call   0807e8c0 <_init+0x11b8>
0890d3f1 +0x21:  test   %eax,%eax
0890d3f3 +0x23:  jne    0890d3fc <+0x2c>
0890d3f5 +0x25:  mov    $0x0,%eax
0890d3fa +0x2a:  jmp    0890d44d <+0x7d>
0890d3fc +0x2c:  movl   $0xa,0x8(%esp)
0890d404 +0x34:  mov    0xc(%ebp),%eax
0890d407 +0x37:  mov    %eax,0x4(%esp)
0890d40b +0x3b:  movl   $"[soso]",(%esp)
0890d412 +0x42:  call   0807e8c0 <_init+0x11b8>
0890d417 +0x47:  test   %eax,%eax
0890d419 +0x49:  jne    0890d422 <+0x52>
0890d41b +0x4b:  mov    $0x1,%eax
0890d420 +0x50:  jmp    0890d44d <+0x7d>
0890d422 +0x52:  movl   $0xa,0x8(%esp)
0890d42a +0x5a:  mov    0xc(%ebp),%eax
0890d42d +0x5d:  mov    %eax,0x4(%esp)
0890d431 +0x61:  movl   $"[bad]",(%esp)
0890d438 +0x68:  call   0807e8c0 <_init+0x11b8>
0890d43d +0x6d:  test   %eax,%eax
0890d43f +0x6f:  jne    0890d448 <+0x78>
0890d441 +0x71:  mov    $0x2,%eax
0890d446 +0x76:  jmp    0890d44d <+0x7d>
0890d448 +0x78:  mov    $0x3,%eax
0890d44d +0x7d:  leave
0890d44e +0x7e:  ret
```

## 反编译 C

```c
// CNPCRelationEventManager::GetFavorIndex @ 0x890d3d0

/* CNPCRelationEventManager::GetFavorIndex(char const*) */

undefined4 __thiscall
CNPCRelationEventManager::GetFavorIndex(CNPCRelationEventManager *this,char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = strncmp("[good]",param_1,10);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = strncmp("[soso]",param_1,10);
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      iVar1 = strncmp("[bad]",param_1,10);
      if (iVar1 == 0) {
        uVar2 = 2;
      }
      else {
        uVar2 = 3;
      }
    }
  }
  return uVar2;
}
```
