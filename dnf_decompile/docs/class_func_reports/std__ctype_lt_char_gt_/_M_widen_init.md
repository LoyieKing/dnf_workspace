# _M_widen_init

`_ZNKSt5ctypeIcE13_M_widen_initEv`

`std::ctype<char>::_M_widen_init() const`

| 类 | 地址 |
|---|---|
| `std::ctype<char>` | `0x087269c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087269c0  _ZNKSt5ctypeIcE13_M_widen_initEv
#           std::ctype<char>::_M_widen_init() const
# range [0x087269c0, 0x08726a3f]
087269c0 +0x00:  push   %ebp
087269c1 +0x01:  mov    %esp,%ebp
087269c3 +0x03:  push   %edi
087269c4 +0x04:  push   %esi
087269c5 +0x05:  push   %ebx
087269c6 +0x06:  sub    $0x12c,%esp
087269cc +0x0c:  mov    0x8(%ebp),%ebx
087269cf +0x0f:  mov    %gs:0x14,%eax
087269d5 +0x15:  mov    %eax,-0x1c(%ebp)
087269d8 +0x18:  xor    %eax,%eax
087269da +0x1a:  lea    -0x11c(%ebp),%esi
087269e0 +0x20:  mov    %al,(%esi,%eax,1)
087269e3 +0x23:  add    $0x1,%eax
087269e6 +0x26:  cmp    $0x100,%eax
087269eb +0x2b:  jne    087269e0 <+0x20>
087269ed +0x2d:  mov    (%ebx),%eax
087269ef +0x2f:  lea    0x1d(%ebx),%edi
087269f2 +0x32:  lea    -0x1c(%ebp),%edx
087269f5 +0x35:  mov    %edi,0xc(%esp)
087269f9 +0x39:  mov    %esi,0x4(%esp)
087269fd +0x3d:  mov    %edx,0x8(%esp)
08726a01 +0x41:  mov    %ebx,(%esp)
08726a04 +0x44:  call   *0x1c(%eax)
08726a07 +0x47:  mov    $0x100,%ecx
08726a0c +0x4c:  movb   $0x1,0x1c(%ebx)
08726a10 +0x50:  repz cmpsb %es:(%edi),%ds:(%esi)
08726a12 +0x52:  je     08726a18 <+0x58>
08726a14 +0x54:  movb   $0x2,0x1c(%ebx)
08726a18 +0x58:  mov    -0x1c(%ebp),%eax
08726a1b +0x5b:  xor    %gs:0x14,%eax
08726a22 +0x62:  jne    08726a2f <+0x6f>
08726a24 +0x64:  add    $0x12c,%esp
08726a2a +0x6a:  pop    %ebx
08726a2b +0x6b:  pop    %esi
08726a2c +0x6c:  pop    %edi
08726a2d +0x6d:  pop    %ebp
08726a2e +0x6e:  ret
08726a2f +0x6f:  call   0807d980 <_init+0x278>
08726a34 +0x74:  nop
08726a35 +0x75:  nop
08726a36 +0x76:  nop
08726a37 +0x77:  nop
08726a38 +0x78:  nop
08726a39 +0x79:  nop
08726a3a +0x7a:  nop
08726a3b +0x7b:  nop
08726a3c +0x7c:  nop
08726a3d +0x7d:  nop
08726a3e +0x7e:  nop
08726a3f +0x7f:  nop
```

## 反编译 C

```c
// std::ctype<char>::_M_widen_init @ 0x87269c0

/* std::ctype<char>::_M_widen_init() const */

void __thiscall std::ctype<char>::_M_widen_init(ctype<char> *this)

{
  int iVar1;
  ctype<char> *pcVar2;
  ctype<char> *pcVar3;
  int in_GS_OFFSET;
  undefined1 uVar4;
  byte bVar5;
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
  (**(code **)(*(int *)this + 0x1c))(this,local_120,local_20,this + 0x1d);
  iVar1 = 0x100;
  this[0x1c] = (ctype<char>)0x1;
  pcVar2 = local_120;
  pcVar3 = this + 0x1d;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    uVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + (uint)bVar5 * -2 + 1;
    pcVar3 = pcVar3 + (uint)bVar5 * -2 + 1;
  } while ((bool)uVar4);
  if (!(bool)uVar4) {
    this[0x1c] = (ctype<char>)0x2;
  }
  if (local_20[0] == *(int *)(in_GS_OFFSET + 0x14)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}
```
