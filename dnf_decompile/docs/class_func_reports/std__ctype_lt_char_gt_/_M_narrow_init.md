# _M_narrow_init

`_ZNKSt5ctypeIcE14_M_narrow_initEv`

`std::ctype<char>::_M_narrow_init() const`

| 类 | 地址 |
|---|---|
| `std::ctype<char>` | `0x08726a40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08726a40  _ZNKSt5ctypeIcE14_M_narrow_initEv
#           std::ctype<char>::_M_narrow_init() const
# range [0x08726a40, 0x08726b1f]
08726a40 +0x00:  push   %ebp
08726a41 +0x01:  mov    %esp,%ebp
08726a43 +0x03:  push   %edi
08726a44 +0x04:  push   %esi
08726a45 +0x05:  push   %ebx
08726a46 +0x06:  sub    $0x14c,%esp
08726a4c +0x0c:  mov    0x8(%ebp),%edx
08726a4f +0x0f:  mov    %gs:0x14,%eax
08726a55 +0x15:  mov    %eax,-0x1c(%ebp)
08726a58 +0x18:  xor    %eax,%eax
08726a5a +0x1a:  lea    -0x11c(%ebp),%ebx
08726a60 +0x20:  mov    %al,(%ebx,%eax,1)
08726a63 +0x23:  add    $0x1,%eax
08726a66 +0x26:  cmp    $0x100,%eax
08726a6b +0x2b:  jne    08726a60 <+0x20>
08726a6d +0x2d:  mov    (%edx),%eax
08726a6f +0x2f:  lea    0x11d(%edx),%edi
08726a75 +0x35:  mov    %ebx,%esi
08726a77 +0x37:  lea    -0x1c(%ebp),%ecx
08726a7a +0x3a:  mov    %edi,0x10(%esp)
08726a7e +0x3e:  mov    %ecx,0x8(%esp)
08726a82 +0x42:  mov    %edx,(%esp)
08726a85 +0x45:  mov    %edx,-0x12c(%ebp)
08726a8b +0x4b:  movl   $0x0,0xc(%esp)
08726a93 +0x53:  mov    %ebx,0x4(%esp)
08726a97 +0x57:  call   *0x24(%eax)
08726a9a +0x5a:  mov    -0x12c(%ebp),%edx
08726aa0 +0x60:  mov    $0x100,%ecx
08726aa5 +0x65:  movb   $0x1,0x21d(%edx)
08726aac +0x6c:  repz cmpsb %es:(%edi),%ds:(%esi)
08726aae +0x6e:  je     08726ace <+0x8e>
08726ab0 +0x70:  movb   $0x2,0x21d(%edx)
08726ab7 +0x77:  mov    -0x1c(%ebp),%eax
08726aba +0x7a:  xor    %gs:0x14,%eax
08726ac1 +0x81:  jne    08726b0d <+0xcd>
08726ac3 +0x83:  add    $0x14c,%esp
08726ac9 +0x89:  pop    %ebx
08726aca +0x8a:  pop    %esi
08726acb +0x8b:  pop    %edi
08726acc +0x8c:  pop    %ebp
08726acd +0x8d:  ret
08726ace +0x8e:  mov    (%edx),%eax
08726ad0 +0x90:  lea    -0x11d(%ebp),%ecx
08726ad6 +0x96:  mov    %ecx,0x10(%esp)
08726ada +0x9a:  lea    -0x11b(%ebp),%ecx
08726ae0 +0xa0:  mov    %edx,(%esp)
08726ae3 +0xa3:  mov    %edx,-0x12c(%ebp)
08726ae9 +0xa9:  movl   $0x1,0xc(%esp)
08726af1 +0xb1:  mov    %ecx,0x8(%esp)
08726af5 +0xb5:  mov    %ebx,0x4(%esp)
08726af9 +0xb9:  call   *0x24(%eax)
08726afc +0xbc:  mov    -0x12c(%ebp),%edx
08726b02 +0xc2:  cmpb   $0x1,-0x11d(%ebp)
08726b09 +0xc9:  jne    08726ab7 <+0x77>
08726b0b +0xcb:  jmp    08726ab0 <+0x70>
08726b0d +0xcd:  call   0807d980 <_init+0x278>
08726b12 +0xd2:  nop
08726b13 +0xd3:  nop
08726b14 +0xd4:  nop
08726b15 +0xd5:  nop
08726b16 +0xd6:  nop
08726b17 +0xd7:  nop
08726b18 +0xd8:  nop
08726b19 +0xd9:  nop
08726b1a +0xda:  nop
08726b1b +0xdb:  nop
08726b1c +0xdc:  nop
08726b1d +0xdd:  nop
08726b1e +0xde:  nop
08726b1f +0xdf:  nop
```

## 反编译 C

```c
// std::ctype<char>::_M_narrow_init @ 0x8726a40

/* std::ctype<char>::_M_narrow_init() const */

void __thiscall std::ctype<char>::_M_narrow_init(ctype<char> *this)

{
  int iVar1;
  ctype<char> *pcVar2;
  ctype<char> *pcVar3;
  int in_GS_OFFSET;
  undefined1 uVar4;
  byte bVar5;
  char local_121;
  ctype<char> local_120 [256];
  int local_20 [4];
  
  bVar5 = 0;
  local_20[0] = *(int *)(in_GS_OFFSET + 0x14);
  iVar1 = 0;
  do {
    local_120[iVar1] = SUB41(iVar1,0);
    iVar1 = iVar1 + 1;
    uVar4 = iVar1 == 0x100;
  } while (!(bool)uVar4);
  (**(code **)(*(int *)this + 0x24))(this,local_120,local_20,0,this + 0x11d);
  iVar1 = 0x100;
  this[0x21d] = (ctype<char>)0x1;
  pcVar2 = local_120;
  pcVar3 = this + 0x11d;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    uVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + (uint)bVar5 * -2 + 1;
    pcVar3 = pcVar3 + (uint)bVar5 * -2 + 1;
  } while ((bool)uVar4);
  if ((!(bool)uVar4) ||
     ((**(code **)(*(int *)this + 0x24))(this,local_120,local_120 + 1,1,&local_121),
     local_121 == '\x01')) {
    this[0x21d] = (ctype<char>)0x2;
  }
  if (local_20[0] != *(int *)(in_GS_OFFSET + 0x14)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}
```
