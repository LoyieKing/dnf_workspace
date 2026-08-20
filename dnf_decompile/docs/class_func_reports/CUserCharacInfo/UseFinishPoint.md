# UseFinishPoint

`_ZN15CUserCharacInfo14UseFinishPointEi`

`CUserCharacInfo::UseFinishPoint(int)`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x08645620` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08645620  _ZN15CUserCharacInfo14UseFinishPointEi
#           CUserCharacInfo::UseFinishPoint(int)
# range [0x08645620, 0x086456cf]
08645620 +0x00:  push   %ebp
08645621 +0x01:  mov    %esp,%ebp
08645623 +0x03:  sub    $0x38,%esp
08645626 +0x06:  mov    0x8(%ebp),%eax
08645629 +0x09:  mov    0x10(%eax),%eax
0864562c +0x0c:  test   %eax,%eax
0864562e +0x0e:  jne    0864566d <+0x4d>
08645630 +0x10:  movl   $0x5,0xc(%esp)
08645638 +0x18:  movl   $0x220,0x8(%esp)
08645640 +0x20:  movl   $&_ZZN15CUserCharacInfo14UseFinishPointEiE19__PRETTY_FUNCTION__,0x4(%esp)
08645648 +0x28:  lea    -0x18(%ebp),%eax
0864564b +0x2b:  mov    %eax,(%esp)
0864564e +0x2e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08645653 +0x33:  movl   $"WARAREA CUserCharacInfo::UseFinishPoint() : m_selected is NULL",0x4(%esp)
0864565b +0x3b:  lea    -0x18(%ebp),%eax
0864565e +0x3e:  mov    %eax,(%esp)
08645661 +0x41:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08645666 +0x46:  mov    $0x0,%eax
0864566b +0x4b:  jmp    086456cd <+0xad>
0864566d +0x4d:  mov    0xc(%ebp),%eax
08645670 +0x50:  neg    %eax
08645672 +0x52:  mov    %eax,0x4(%esp)
08645676 +0x56:  mov    0x8(%ebp),%eax
08645679 +0x59:  mov    %eax,(%esp)
0864567c +0x5c:  call   086457c0 <_ZN15CUserCharacInfo17ChangeFinishPointEi>  ; CUserCharacInfo::ChangeFinishPoint(int)
08645681 +0x61:  mov    0x8(%ebp),%eax
08645684 +0x64:  mov    0x10(%eax),%eax
08645687 +0x67:  mov    0xe0a(%eax),%edx
0864568d +0x6d:  mov    0x8(%ebp),%eax
08645690 +0x70:  mov    0x10(%eax),%eax
08645693 +0x73:  mov    0xe06(%eax),%eax
08645699 +0x79:  mov    0x8(%ebp),%ecx
0864569c +0x7c:  add    $0x79700,%ecx
086456a2 +0x82:  movl   $0x0,0x10(%esp)
086456aa +0x8a:  mov    %edx,0xc(%esp)
086456ae +0x8e:  mov    %eax,0x8(%esp)
086456b2 +0x92:  mov    0xc(%ebp),%eax
086456b5 +0x95:  mov    %eax,0x4(%esp)
086456b9 +0x99:  mov    %ecx,(%esp)
086456bc +0x9c:  call   08684b96 <_ZN15cUserHistoryLog5FPSubEiii12eFPSubReason>  ; cUserHistoryLog::FPSub(int, int, int, eFPSubReason)
086456c1 +0xa1:  mov    0x8(%ebp),%eax
086456c4 +0xa4:  mov    0x10(%eax),%eax
086456c7 +0xa7:  mov    0xe06(%eax),%eax
086456cd +0xad:  leave
086456ce +0xae:  ret
086456cf +0xaf:  nop
```

## 反编译 C

```c
// CUserCharacInfo::UseFinishPoint @ 0x8645620

/* CUserCharacInfo::UseFinishPoint(int) */

undefined4 __thiscall CUserCharacInfo::UseFinishPoint(CUserCharacInfo *this,int param_1)

{
  undefined4 uVar1;
  cMyTrace local_1c [24];
  
  if (*(int *)(this + 0x10) == 0) {
    cMyTrace::cMyTrace(local_1c,"unsigned int CUserCharacInfo::UseFinishPoint(int)",0x220,5);
    cMyTrace::operator()(local_1c,"WARAREA CUserCharacInfo::UseFinishPoint() : m_selected is NULL");
    uVar1 = 0;
  }
  else {
    ChangeFinishPoint(this,-param_1);
    cUserHistoryLog::FPSub
              ((cUserHistoryLog *)(this + 0x79700),param_1,
               *(undefined4 *)(*(int *)(this + 0x10) + 0xe06),
               *(undefined4 *)(*(int *)(this + 0x10) + 0xe0a),0);
    uVar1 = *(undefined4 *)(*(int *)(this + 0x10) + 0xe06);
  }
  return uVar1;
}
```
