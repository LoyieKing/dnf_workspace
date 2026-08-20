# GenerateRange

`_ZN21WindowsDataFileFamily13GenerateRangeEPmS0_`

`WindowsDataFileFamily::GenerateRange(unsigned long*, unsigned long*)`

| 类 | 地址 |
|---|---|
| `WindowsDataFileFamily` | `0x08575230` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08575230  _ZN21WindowsDataFileFamily13GenerateRangeEPmS0_
#           WindowsDataFileFamily::GenerateRange(unsigned long*, unsigned long*)
# range [0x08575230, 0x08575301]
08575230 +0x00:  push   %ebp
08575231 +0x01:  mov    %esp,%ebp
08575233 +0x03:  push   %ebx
08575234 +0x04:  sub    $0x24,%esp
08575237 +0x07:  movb   $0x0,-0x9(%ebp)
0857523b +0x0b:  mov    0x8(%ebp),%eax
0857523e +0x0e:  mov    %eax,(%esp)
08575241 +0x11:  call   08576c76 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0xe3a>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0xe3a
08575246 +0x16:  test   %al,%al
08575248 +0x18:  je     08575254 <+0x24>
0857524a +0x1a:  mov    $0x0,%eax
0857524f +0x1f:  jmp    085752fc <+0xcc>
08575254 +0x24:  mov    0x8(%ebp),%eax
08575257 +0x27:  mov    0x118(%eax),%ebx
0857525d +0x2d:  call   0807dca0 <_init+0x598>
08575262 +0x32:  mov    0x8(%ebp),%edx
08575265 +0x35:  mov    0x11c(%edx),%edx
0857526b +0x3b:  lea    0x1(%edx),%ecx
0857526e +0x3e:  mov    $0x0,%edx
08575273 +0x43:  div    %ecx
08575275 +0x45:  mov    %edx,%eax
08575277 +0x47:  lea    (%ebx,%eax,1),%eax
0857527a +0x4a:  mov    %eax,-0x10(%ebp)
0857527d +0x4d:  mov    0x8(%ebp),%eax
08575280 +0x50:  mov    0x114(%eax),%edx
08575286 +0x56:  mov    0x8(%ebp),%eax
08575289 +0x59:  mov    0x110(%eax),%eax
0857528f +0x5f:  add    -0x10(%ebp),%eax
08575292 +0x62:  cmp    %eax,%edx
08575294 +0x64:  ja     085752b5 <+0x85>
08575296 +0x66:  mov    0x8(%ebp),%eax
08575299 +0x69:  mov    0x114(%eax),%edx
0857529f +0x6f:  mov    0x8(%ebp),%eax
085752a2 +0x72:  mov    0x110(%eax),%eax
085752a8 +0x78:  mov    %edx,%ecx
085752aa +0x7a:  sub    %eax,%ecx
085752ac +0x7c:  mov    %ecx,%eax
085752ae +0x7e:  mov    %eax,-0x10(%ebp)
085752b1 +0x81:  movb   $0x1,-0x9(%ebp)
085752b5 +0x85:  mov    0x8(%ebp),%eax
085752b8 +0x88:  mov    0x110(%eax),%edx
085752be +0x8e:  mov    0xc(%ebp),%eax
085752c1 +0x91:  mov    %edx,(%eax)
085752c3 +0x93:  mov    0x10(%ebp),%eax
085752c6 +0x96:  mov    -0x10(%ebp),%edx
085752c9 +0x99:  mov    %edx,(%eax)
085752cb +0x9b:  cmpb   $0x0,-0x9(%ebp)
085752cf +0x9f:  je     085752e0 <+0xb0>
085752d1 +0xa1:  mov    0x8(%ebp),%eax
085752d4 +0xa4:  movl   $0x0,0x110(%eax)
085752de +0xae:  jmp    085752f7 <+0xc7>
085752e0 +0xb0:  mov    0x8(%ebp),%eax
085752e3 +0xb3:  mov    0x110(%eax),%eax
085752e9 +0xb9:  mov    %eax,%edx
085752eb +0xbb:  add    -0x10(%ebp),%edx
085752ee +0xbe:  mov    0x8(%ebp),%eax
085752f1 +0xc1:  mov    %edx,0x110(%eax)
085752f7 +0xc7:  mov    $0x1,%eax
085752fc +0xcc:  add    $0x24,%esp
085752ff +0xcf:  pop    %ebx
08575300 +0xd0:  pop    %ebp
08575301 +0xd1:  ret
```

## 反编译 C

```c
// WindowsDataFileFamily::GenerateRange @ 0x8575230

/* WindowsDataFileFamily::GenerateRange(unsigned long*, unsigned long*) */

undefined4 __thiscall
WindowsDataFileFamily::GenerateRange(WindowsDataFileFamily *this,ulong *param_1,ulong *param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong local_14;
  
  cVar3 = std::vector<WindowsDataFile*,std::allocator<WindowsDataFile*>>::empty();
  if (cVar3 == '\0') {
    iVar1 = *(int *)(this + 0x118);
    uVar5 = rand();
    local_14 = iVar1 + uVar5 % (*(int *)(this + 0x11c) + 1U);
    bVar2 = *(uint *)(this + 0x114) <= *(int *)(this + 0x110) + local_14;
    if (bVar2) {
      local_14 = *(int *)(this + 0x114) - *(int *)(this + 0x110);
    }
    *param_1 = *(ulong *)(this + 0x110);
    *param_2 = local_14;
    if (bVar2) {
      *(undefined4 *)(this + 0x110) = 0;
    }
    else {
      *(ulong *)(this + 0x110) = *(int *)(this + 0x110) + local_14;
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}
```
