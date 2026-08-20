# handleInformNoticeFlag

`_ZN19CCharacInformNotice22handleInformNoticeFlagEj`

`CCharacInformNotice::handleInformNoticeFlag(unsigned int)`

| 类 | 地址 |
|---|---|
| `CCharacInformNotice` | `0x080e4806` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e4806  _ZN19CCharacInformNotice22handleInformNoticeFlagEj
#           CCharacInformNotice::handleInformNoticeFlag(unsigned int)
# range [0x080e4806, 0x080e4891]
080e4806 +0x00:  push   %ebp
080e4807 +0x01:  mov    %esp,%ebp
080e4809 +0x03:  push   %edi
080e480a +0x04:  push   %esi
080e480b +0x05:  push   %ebx
080e480c +0x06:  sub    $0x2c,%esp
080e480f +0x09:  mov    0xc(%ebp),%eax
080e4812 +0x0c:  and    $0x7,%eax
080e4815 +0x0f:  mov    %eax,-0x20(%ebp)
080e4818 +0x12:  cmpl   $0x7,-0x20(%ebp)
080e481c +0x16:  ja     080e4883 <+0x7d>
080e481e +0x18:  mov    0xc(%ebp),%eax
080e4821 +0x1b:  shr    $0x3,%eax
080e4824 +0x1e:  mov    %eax,-0x1c(%ebp)
080e4827 +0x21:  cmpl   $0xf,-0x1c(%ebp)
080e482b +0x25:  ja     080e4886 <+0x80>
080e482d +0x27:  mov    -0x1c(%ebp),%eax
080e4830 +0x2a:  mov    %eax,0x8(%esp)
080e4834 +0x2e:  mov    -0x20(%ebp),%eax
080e4837 +0x31:  mov    %eax,0x4(%esp)
080e483b +0x35:  mov    0x8(%ebp),%eax
080e483e +0x38:  mov    %eax,(%esp)
080e4841 +0x3b:  call   080e4892 <_ZN19CCharacInformNotice21checkInformNoticeFlagEjj>  ; CCharacInformNotice::checkInformNoticeFlag(unsigned int, unsigned int)
080e4846 +0x40:  test   %al,%al
080e4848 +0x42:  je     080e4889 <+0x83>
080e484a +0x44:  mov    -0x1c(%ebp),%eax
080e484d +0x47:  mov    -0x1c(%ebp),%edx
080e4850 +0x4a:  mov    0x8(%ebp),%ecx
080e4853 +0x4d:  movzbl 0x5(%ecx,%edx,1),%edx
080e4858 +0x52:  mov    %edx,%ebx
080e485a +0x54:  mov    -0x20(%ebp),%edx
080e485d +0x57:  mov    $0x1,%esi
080e4862 +0x5c:  mov    %esi,%edi
080e4864 +0x5e:  mov    %edx,%ecx
080e4866 +0x60:  shl    %cl,%edi
080e4868 +0x62:  mov    %edi,%edx
080e486a +0x64:  lea    (%ebx,%edx,1),%edx
080e486d +0x67:  mov    %edx,%ecx
080e486f +0x69:  mov    0x8(%ebp),%edx
080e4872 +0x6c:  mov    %cl,0x5(%edx,%eax,1)
080e4876 +0x70:  mov    0x8(%ebp),%eax
080e4879 +0x73:  mov    %eax,(%esp)
080e487c +0x76:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
080e4881 +0x7b:  jmp    080e488a <+0x84>
080e4883 +0x7d:  nop
080e4884 +0x7e:  jmp    080e488a <+0x84>
080e4886 +0x80:  nop
080e4887 +0x81:  jmp    080e488a <+0x84>
080e4889 +0x83:  nop
080e488a +0x84:  add    $0x2c,%esp
080e488d +0x87:  pop    %ebx
080e488e +0x88:  pop    %esi
080e488f +0x89:  pop    %edi
080e4890 +0x8a:  pop    %ebp
080e4891 +0x8b:  ret
```

## 反编译 C

```c
// CCharacInformNotice::handleInformNoticeFlag @ 0x80e4806

/* CCharacInformNotice::handleInformNoticeFlag(unsigned int) */

void __thiscall CCharacInformNotice::handleInformNoticeFlag(CCharacInformNotice *this,uint param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_1 & 7;
  if (((uVar2 < 8) && (uVar3 = param_1 >> 3, uVar3 < 0x10)) &&
     (cVar1 = checkInformNoticeFlag(this,uVar2,uVar3), cVar1 != '\0')) {
    this[uVar3 + 5] = (CCharacInformNotice)((char)this[uVar3 + 5] + (char)(1 << (sbyte)uVar2));
    charac_expand::CData::alter((CData *)this);
  }
  return;
}
```
