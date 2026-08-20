# _DrawEnchant

`_ZN10expert_job10CEnchanter12_DrawEnchantEv`

`expert_job::CEnchanter::_DrawEnchant()`

| 类 | 地址 |
|---|---|
| `expert_job::CEnchanter` | `0x0849cac6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0849cac6  _ZN10expert_job10CEnchanter12_DrawEnchantEv
#           expert_job::CEnchanter::_DrawEnchant()
# range [0x0849cac6, 0x0849cb2b]
0849cac6 +0x00:  push   %ebp
0849cac7 +0x01:  mov    %esp,%ebp
0849cac9 +0x03:  sub    $0x28,%esp
0849cacc +0x06:  movl   $0x0,-0xc(%ebp)
0849cad3 +0x0d:  mov    0x8(%ebp),%eax
0849cad6 +0x10:  mov    0x40(%eax),%eax
0849cad9 +0x13:  mov    %eax,%edx
0849cadb +0x15:  mov    0x8(%ebp),%eax
0849cade +0x18:  mov    0x28(%eax),%eax
0849cae1 +0x1b:  lea    -0xc(%ebp),%ecx
0849cae4 +0x1e:  mov    %ecx,0x8(%esp)
0849cae8 +0x22:  mov    %edx,0x4(%esp)
0849caec +0x26:  mov    %eax,(%esp)
0849caef +0x29:  call   0849b462 <_ZN10expert_job10CExpertJob9IsSuccessEP5CUserPK14CStackableItemRi>  ; expert_job::CExpertJob::IsSuccess(CUser*, CStackableItem const*, int&)
0849caf4 +0x2e:  test   %al,%al
0849caf6 +0x30:  je     0849cb25 <+0x5f>
0849caf8 +0x32:  mov    0x8(%ebp),%eax
0849cafb +0x35:  mov    0x28(%eax),%eax
0849cafe +0x38:  mov    %eax,(%esp)
0849cb01 +0x3b:  call   08375026 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeff2>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeff2
0849cb06 +0x40:  mov    -0xc(%ebp),%edx
0849cb09 +0x43:  lea    (%eax,%edx,1),%edx
0849cb0c +0x46:  mov    0x8(%ebp),%eax
0849cb0f +0x49:  mov    0x28(%eax),%eax
0849cb12 +0x4c:  mov    %edx,0x4(%esp)
0849cb16 +0x50:  mov    %eax,(%esp)
0849cb19 +0x53:  call   0849ae40 <_ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri>  ; expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)
0849cb1e +0x58:  mov    $0x1,%eax
0849cb23 +0x5d:  jmp    0849cb2a <+0x64>
0849cb25 +0x5f:  mov    $0x0,%eax
0849cb2a +0x64:  leave
0849cb2b +0x65:  ret
```

## 反编译 C

```c
// expert_job::CEnchanter::_DrawEnchant @ 0x849cac6

/* expert_job::CEnchanter::_DrawEnchant() */

bool __thiscall expert_job::CEnchanter::_DrawEnchant(CEnchanter *this)

{
  char cVar1;
  int iVar2;
  int local_10 [3];
  
  local_10[0] = 0;
  cVar1 = CExpertJob::IsSuccess(*(CUser **)(this + 0x28),*(CStackableItem **)(this + 0x40),local_10)
  ;
  if (cVar1 != '\0') {
    iVar2 = CUserCharacInfo::GetCurCharacExpertJobExp(*(CUserCharacInfo **)(this + 0x28));
    CExpertJob::IncreaseExpertJobExp(*(CUser **)(this + 0x28),iVar2 + local_10[0]);
  }
  return cVar1 != '\0';
}
```
