# setCharacLevelUpGift_AccountOnce

`_ZN5CUser32setCharacLevelUpGift_AccountOnceER29SIG_LEVELUP_GIFT_ACCOUNT_ONCE`

`CUser::setCharacLevelUpGift_AccountOnce(SIG_LEVELUP_GIFT_ACCOUNT_ONCE&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08691dca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08691dca  _ZN5CUser32setCharacLevelUpGift_AccountOnceER29SIG_LEVELUP_GIFT_ACCOUNT_ONCE
#           CUser::setCharacLevelUpGift_AccountOnce(SIG_LEVELUP_GIFT_ACCOUNT_ONCE&)
# range [0x08691dca, 0x08691e5b]
08691dca +0x00:  push   %ebp
08691dcb +0x01:  mov    %esp,%ebp
08691dcd +0x03:  sub    $0x38,%esp
08691dd0 +0x06:  movl   $0x0,-0xc(%ebp)
08691dd7 +0x0d:  jmp    08691e4c <+0x82>
08691dd9 +0x0f:  mov    -0xc(%ebp),%edx
08691ddc +0x12:  mov    0xc(%ebp),%eax
08691ddf +0x15:  mov    0x4(%eax,%edx,8),%eax
08691de3 +0x19:  test   %eax,%eax
08691de5 +0x1b:  je     08691e59 <+0x8f>
08691de7 +0x1d:  mov    -0xc(%ebp),%eax
08691dea +0x20:  shl    $0x3,%eax
08691ded +0x23:  add    0xc(%ebp),%eax
08691df0 +0x26:  lea    0x4(%eax),%ecx
08691df3 +0x29:  mov    -0xc(%ebp),%eax
08691df6 +0x2c:  shl    $0x3,%eax
08691df9 +0x2f:  mov    %eax,%edx
08691dfb +0x31:  add    0xc(%ebp),%edx
08691dfe +0x34:  lea    -0x14(%ebp),%eax
08691e01 +0x37:  mov    %ecx,0x8(%esp)
08691e05 +0x3b:  mov    %edx,0x4(%esp)
08691e09 +0x3f:  mov    %eax,(%esp)
08691e0c +0x42:  call   081112b2 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x7c4>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x7c4
08691e11 +0x47:  sub    $0x4,%esp
08691e14 +0x4a:  lea    -0x14(%ebp),%eax
08691e17 +0x4d:  mov    %eax,0x4(%esp)
08691e1b +0x51:  lea    -0x1c(%ebp),%eax
08691e1e +0x54:  mov    %eax,(%esp)
08691e21 +0x57:  call   080c6d20 <_GLOBAL__I_g_ServerString_+0x28b>  ; global constructors keyed to g_ServerString_+0x28b
08691e26 +0x5c:  mov    0x8(%ebp),%eax
08691e29 +0x5f:  lea    0x8ec04(%eax),%ecx
08691e2f +0x65:  lea    -0x20(%ebp),%eax
08691e32 +0x68:  lea    -0x1c(%ebp),%edx
08691e35 +0x6b:  mov    %edx,0x8(%esp)
08691e39 +0x6f:  mov    %ecx,0x4(%esp)
08691e3d +0x73:  mov    %eax,(%esp)
08691e40 +0x76:  call   081b8d8c <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x593>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x593
08691e45 +0x7b:  sub    $0x4,%esp
08691e48 +0x7e:  addl   $0x1,-0xc(%ebp)
08691e4c +0x82:  cmpl   $0xa,-0xc(%ebp)
08691e50 +0x86:  setle  %al
08691e53 +0x89:  test   %al,%al
08691e55 +0x8b:  jne    08691dd9 <+0xf>
08691e57 +0x8d:  jmp    08691e5a <+0x90>
08691e59 +0x8f:  nop
08691e5a +0x90:  leave
08691e5b +0x91:  ret
```

## 反编译 C

```c
// CUser::setCharacLevelUpGift_AccountOnce @ 0x8691dca

/* CUser::setCharacLevelUpGift_AccountOnce(SIG_LEVELUP_GIFT_ACCOUNT_ONCE&) */

void __thiscall
CUser::setCharacLevelUpGift_AccountOnce(CUser *this,SIG_LEVELUP_GIFT_ACCOUNT_ONCE *param_1)

{
  pair local_24 [4];
  pair<int_const,int> local_20 [8];
  int local_18 [2];
  int local_10;
  
  local_10 = 0;
  while ((local_10 < 0xb && (*(int *)(param_1 + local_10 * 8 + 4) != 0))) {
    std::make_pair<int&,int&>(local_18,(int *)(param_1 + local_10 * 8));
    std::pair<int_const,int>::pair<int,int>(local_20,(pair *)local_18);
    std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert(local_24)
    ;
    local_10 = local_10 + 1;
  }
  return;
}
```
