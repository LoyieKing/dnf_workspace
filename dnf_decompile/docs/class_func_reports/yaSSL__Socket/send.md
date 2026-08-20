# send

`_ZNK5yaSSL6Socket4sendEPKhji`

`yaSSL::Socket::send(unsigned char const*, unsigned int, int) const`

| 类 | 地址 |
|---|---|
| `yaSSL::Socket` | `0x087a1650` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a1650  _ZNK5yaSSL6Socket4sendEPKhji
#           yaSSL::Socket::send(unsigned char const*, unsigned int, int) const
# range [0x087a1650, 0x087a16b9]
087a1650 +0x00:  push   %ebp
087a1651 +0x01:  mov    %esp,%ebp
087a1653 +0x03:  push   %edi
087a1654 +0x04:  push   %esi
087a1655 +0x05:  push   %ebx
087a1656 +0x06:  sub    $0x2c,%esp
087a1659 +0x09:  mov    0xc(%ebp),%esi
087a165c +0x0c:  mov    0x10(%ebp),%edi
087a165f +0x0f:  call   08722df8 <__i686.get_pc_thunk.bx>
087a1664 +0x14:  add    $0xbcb534,%ebx
087a166a +0x1a:  mov    0x8(%ebp),%edx
087a166d +0x1d:  lea    (%esi,%edi,1),%edi
087a1670 +0x20:  cmp    %edi,%esi
087a1672 +0x22:  jne    087a167e <+0x2e>
087a1674 +0x24:  jmp    087a16ad <+0x5d>
087a1676 +0x26:  xchg   %ax,%ax
087a1678 +0x28:  add    %eax,%esi
087a167a +0x2a:  cmp    %esi,%edi
087a167c +0x2c:  je     087a16ad <+0x5d>
087a167e +0x2e:  mov    0x14(%ebp),%eax
087a1681 +0x31:  mov    %esi,0x4(%esp)
087a1685 +0x35:  mov    %edx,-0x1c(%ebp)
087a1688 +0x38:  mov    %eax,0xc(%esp)
087a168c +0x3c:  mov    %edi,%eax
087a168e +0x3e:  sub    %esi,%eax
087a1690 +0x40:  mov    %eax,0x8(%esp)
087a1694 +0x44:  mov    (%edx),%eax
087a1696 +0x46:  mov    %eax,(%esp)
087a1699 +0x49:  call   0807db40 <_init+0x438>
087a169e +0x4e:  mov    -0x1c(%ebp),%edx
087a16a1 +0x51:  cmp    $0xffffffff,%eax
087a16a4 +0x54:  jne    087a1678 <+0x28>
087a16a6 +0x56:  movl   $0x0,0x10(%ebp)
087a16ad +0x5d:  mov    0x10(%ebp),%eax
087a16b0 +0x60:  add    $0x2c,%esp
087a16b3 +0x63:  pop    %ebx
087a16b4 +0x64:  pop    %esi
087a16b5 +0x65:  pop    %edi
087a16b6 +0x66:  pop    %ebp
087a16b7 +0x67:  ret
087a16b8 +0x68:  nop
087a16b9 +0x69:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::Socket::send @ 0x87a1650

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Socket::send(unsigned char const*, unsigned int, int) const */

uint __thiscall yaSSL::Socket::send(Socket *this,uchar *param_1,uint param_2,int param_3)

{
  uchar *puVar1;
  ssize_t sVar2;
  
  puVar1 = param_1 + param_2;
  while( true ) {
    if (param_1 == puVar1) {
      return param_2;
    }
    sVar2 = ::send(*(int *)this,param_1,(int)puVar1 - (int)param_1,param_3);
    if (sVar2 == -1) break;
    param_1 = param_1 + sVar2;
  }
  return 0;
}
```
