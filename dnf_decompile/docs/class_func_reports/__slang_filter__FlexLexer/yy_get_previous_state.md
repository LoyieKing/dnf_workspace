# yy_get_previous_state

`_ZN25__slang_filter__FlexLexer21yy_get_previous_stateEv`

`__slang_filter__FlexLexer::yy_get_previous_state()`

| 类 | 地址 |
|---|---|
| `__slang_filter__FlexLexer` | `0x08094020` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08094020  _ZN25__slang_filter__FlexLexer21yy_get_previous_stateEv
#           __slang_filter__FlexLexer::yy_get_previous_state()
# range [0x08094020, 0x080940fb]
08094020 +0x00:  push   %ebp
08094021 +0x01:  mov    %esp,%ebp
08094023 +0x03:  push   %edi
08094024 +0x04:  push   %esi
08094025 +0x05:  push   %ebx
08094026 +0x06:  mov    0x8(%ebp),%eax
08094029 +0x09:  mov    0x38(%eax),%ebx
0809402c +0x0c:  mov    0x8(%ebp),%eax
0809402f +0x0f:  mov    0x4(%eax),%esi
08094032 +0x12:  jmp    080940e1 <+0xc1>
08094037 +0x17:  movzbl (%esi),%eax
0809403a +0x1a:  test   %al,%al
0809403c +0x1c:  je     0809404d <+0x2d>
0809403e +0x1e:  movzbl (%esi),%eax
08094041 +0x21:  movzbl %al,%eax
08094044 +0x24:  mov    &_ZL5yy_ec(,%eax,4),%eax
0809404b +0x2b:  jmp    08094052 <+0x32>
0809404d +0x2d:  mov    $0x1,%eax
08094052 +0x32:  mov    %eax,%edi
08094054 +0x34:  mov    %ebx,%eax
08094056 +0x36:  movzwl &_ZL9yy_accept(%eax,%eax,1),%eax
0809405e +0x3e:  test   %ax,%ax
08094061 +0x41:  je     08094096 <+0x76>
08094063 +0x43:  mov    0x8(%ebp),%eax
08094066 +0x46:  mov    %ebx,0x4c(%eax)
08094069 +0x49:  mov    0x8(%ebp),%eax
0809406c +0x4c:  mov    %esi,0x50(%eax)
0809406f +0x4f:  jmp    08094097 <+0x77>
08094071 +0x51:  mov    %ebx,%eax
08094073 +0x53:  movzwl &_ZL6yy_def(%eax,%eax,1),%eax
0809407b +0x5b:  movswl %ax,%ebx
0809407e +0x5e:  cmp    $0x2708,%ebx
08094084 +0x64:  jle    08094097 <+0x77>
08094086 +0x66:  mov    %edi,%edx
08094088 +0x68:  movzbl %dl,%eax
0809408b +0x6b:  mov    &_ZL7yy_meta(,%eax,4),%eax
08094092 +0x72:  mov    %eax,%edi
08094094 +0x74:  jmp    08094097 <+0x77>
08094096 +0x76:  nop
08094097 +0x77:  mov    %ebx,%eax
08094099 +0x79:  movzwl &_ZL7yy_base(%eax,%eax,1),%eax
080940a1 +0x81:  movswl %ax,%edx
080940a4 +0x84:  mov    %edi,%ecx
080940a6 +0x86:  movzbl %cl,%eax
080940a9 +0x89:  lea    (%edx,%eax,1),%eax
080940ac +0x8c:  movzwl &_ZL6yy_chk(%eax,%eax,1),%eax
080940b4 +0x94:  cwtl
080940b5 +0x95:  cmp    %ebx,%eax
080940b7 +0x97:  setne  %al
080940ba +0x9a:  test   %al,%al
080940bc +0x9c:  jne    08094071 <+0x51>
080940be +0x9e:  mov    %ebx,%eax
080940c0 +0xa0:  movzwl &_ZL7yy_base(%eax,%eax,1),%eax
080940c8 +0xa8:  movswl %ax,%edx
080940cb +0xab:  mov    %edi,%ecx
080940cd +0xad:  movzbl %cl,%eax
080940d0 +0xb0:  lea    (%edx,%eax,1),%eax
080940d3 +0xb3:  movzwl &_ZL6yy_nxt(%eax,%eax,1),%eax
080940db +0xbb:  movswl %ax,%ebx
080940de +0xbe:  add    $0x1,%esi
080940e1 +0xc1:  mov    0x8(%ebp),%eax
080940e4 +0xc4:  mov    0x30(%eax),%eax
080940e7 +0xc7:  cmp    %esi,%eax
080940e9 +0xc9:  seta   %al
080940ec +0xcc:  test   %al,%al
080940ee +0xce:  jne    08094037 <+0x17>
080940f4 +0xd4:  mov    %ebx,%eax
080940f6 +0xd6:  pop    %ebx
080940f7 +0xd7:  pop    %esi
080940f8 +0xd8:  pop    %edi
080940f9 +0xd9:  pop    %ebp
080940fa +0xda:  ret
080940fb +0xdb:  nop
```

## 反编译 C

```c
// __slang_filter__FlexLexer::yy_get_previous_state @ 0x8094020

/* __slang_filter__FlexLexer::yy_get_previous_state() */

int __thiscall __slang_filter__FlexLexer::yy_get_previous_state(__slang_filter__FlexLexer *this)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  
  iVar2 = *(int *)(this + 0x38);
  for (pbVar3 = *(byte **)(this + 4); pbVar3 < *(byte **)(this + 0x30); pbVar3 = pbVar3 + 1) {
    if (*pbVar3 == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = *(uint *)(yy_ec + (uint)*pbVar3 * 4);
    }
    if (*(short *)(yy_accept + iVar2 * 2) != 0) {
      *(int *)(this + 0x4c) = iVar2;
      *(byte **)(this + 0x50) = pbVar3;
    }
    while (*(short *)(yy_chk + ((int)*(short *)(yy_base + iVar2 * 2) + (uVar1 & 0xff)) * 2) != iVar2
          ) {
      iVar2 = (int)*(short *)(yy_def + iVar2 * 2);
      if (0x2708 < iVar2) {
        uVar1 = *(uint *)(yy_meta + (uVar1 & 0xff) * 4);
      }
    }
    iVar2 = (int)*(short *)(yy_nxt + ((int)*(short *)(yy_base + iVar2 * 2) + (uVar1 & 0xff)) * 2);
  }
  return iVar2;
}
```
