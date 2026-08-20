# send_attend_final_rward_item

`_ZN13EventClassify11CAttendance28send_attend_final_rward_itemEP5CUserii`

`EventClassify::CAttendance::send_attend_final_rward_item(CUser*, int, int)`

| 类 | 地址 |
|---|---|
| `EventClassify::CAttendance` | `0x0810e9c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810e9c0  _ZN13EventClassify11CAttendance28send_attend_final_rward_itemEP5CUserii
#           EventClassify::CAttendance::send_attend_final_rward_item(CUser*, int, int)
# range [0x0810e9c0, 0x0810eadb]
0810e9c0 +0x000:  push   %ebp
0810e9c1 +0x001:  mov    %esp,%ebp
0810e9c3 +0x003:  push   %ebx
0810e9c4 +0x004:  sub    $0x44,%esp
0810e9c7 +0x007:  mov    0xc(%ebp),%eax
0810e9ca +0x00a:  mov    %eax,(%esp)
0810e9cd +0x00d:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0810e9d2 +0x012:  movl   $0x0,0x4(%esp)
0810e9da +0x01a:  mov    %eax,(%esp)
0810e9dd +0x01d:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0810e9e2 +0x022:  mov    %eax,%ebx
0810e9e4 +0x024:  movl   $0x0,0xc(%esp)
0810e9ec +0x02c:  movl   $0x5ba,0x8(%esp)
0810e9f4 +0x034:  movl   $&_ZZN13EventClassify11CAttendance28send_attend_final_rward_itemEP5CUseriiE19__PRETTY_FUNCTION__,0x4(%esp)
0810e9fc +0x03c:  lea    -0x20(%ebp),%eax
0810e9ff +0x03f:  mov    %eax,(%esp)
0810ea02 +0x042:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0810ea07 +0x047:  mov    0x10(%ebp),%eax
0810ea0a +0x04a:  mov    %eax,0x10(%esp)
0810ea0e +0x04e:  mov    0x14(%ebp),%eax
0810ea11 +0x051:  mov    %eax,0xc(%esp)
0810ea15 +0x055:  mov    %ebx,0x8(%esp)
0810ea19 +0x059:  movl   $"send_attend_final_rward_item m_id:%s day:%d record:%u",0x4(%esp)
0810ea21 +0x061:  lea    -0x20(%ebp),%eax
0810ea24 +0x064:  mov    %eax,(%esp)
0810ea27 +0x067:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0810ea2c +0x06c:  movl   $0x0,-0x10(%ebp)
0810ea33 +0x073:  movl   $0x0,-0xc(%ebp)
0810ea3a +0x07a:  jmp    0810ea5a <+0x9a>
0810ea3c +0x07c:  mov    0x10(%ebp),%eax
0810ea3f +0x07f:  mov    -0xc(%ebp),%edx
0810ea42 +0x082:  mov    %edx,0x4(%esp)
0810ea46 +0x086:  mov    %eax,(%esp)
0810ea49 +0x089:  call   0889232e <_Z13isSetBit_Uintji>  ; isSetBit_Uint(unsigned int, int)
0810ea4e +0x08e:  test   %al,%al
0810ea50 +0x090:  je     0810ea56 <+0x96>
0810ea52 +0x092:  addl   $0x1,-0x10(%ebp)
0810ea56 +0x096:  addl   $0x1,-0xc(%ebp)
0810ea5a +0x09a:  cmpl   $0x1f,-0xc(%ebp)
0810ea5e +0x09e:  setle  %al
0810ea61 +0x0a1:  test   %al,%al
0810ea63 +0x0a3:  jne    0810ea3c <+0x7c>
0810ea65 +0x0a5:  mov    0x14(%ebp),%eax
0810ea68 +0x0a8:  cmp    -0x10(%ebp),%eax
0810ea6b +0x0ab:  jne    0810ead6 <+0x116>
0810ea6d +0x0ad:  mov    0x8(%ebp),%eax
0810ea70 +0x0b0:  mov    0x1c(%eax),%eax
0810ea73 +0x0b3:  mov    0x8(%ebp),%edx
0810ea76 +0x0b6:  mov    0x1c(%edx),%edx
0810ea79 +0x0b9:  mov    0x1c(%edx),%edx
0810ea7c +0x0bc:  mov    %edx,0x4c(%eax)
0810ea7f +0x0bf:  mov    0x8(%ebp),%eax
0810ea82 +0x0c2:  mov    0x1c(%eax),%eax
0810ea85 +0x0c5:  mov    0x8(%ebp),%edx
0810ea88 +0x0c8:  mov    0x1c(%edx),%edx
0810ea8b +0x0cb:  mov    0x20(%edx),%edx
0810ea8e +0x0ce:  mov    %edx,0x50(%eax)
0810ea91 +0x0d1:  mov    0x8(%ebp),%eax
0810ea94 +0x0d4:  mov    0x1c(%eax),%eax
0810ea97 +0x0d7:  lea    0x74(%eax),%edx
0810ea9a +0x0da:  mov    0x8(%ebp),%eax
0810ea9d +0x0dd:  mov    0x1c(%eax),%eax
0810eaa0 +0x0e0:  add    $0x60,%eax
0810eaa3 +0x0e3:  mov    %edx,0x4(%esp)
0810eaa7 +0x0e7:  mov    %eax,(%esp)
0810eaaa +0x0ea:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
0810eaaf +0x0ef:  mov    0x8(%ebp),%eax
0810eab2 +0x0f2:  mov    0x1c(%eax),%eax
0810eab5 +0x0f5:  add    $0x2c,%eax
0810eab8 +0x0f8:  movl   $0x1,0xc(%esp)
0810eac0 +0x100:  mov    %eax,0x8(%esp)
0810eac4 +0x104:  mov    0xc(%ebp),%eax
0810eac7 +0x107:  mov    %eax,0x4(%esp)
0810eacb +0x10b:  lea    -0x21(%ebp),%eax
0810eace +0x10e:  mov    %eax,(%esp)
0810ead1 +0x111:  call   0810cf32 <_ZN13EventClassify15CEventActionMng24process_action_send_mailEP5CUserR15Action_SendMailb>  ; EventClassify::CEventActionMng::process_action_send_mail(CUser*, Action_SendMail&, bool)
0810ead6 +0x116:  add    $0x44,%esp
0810ead9 +0x119:  pop    %ebx
0810eada +0x11a:  pop    %ebp
0810eadb +0x11b:  ret
```

## 反编译 C

```c
// EventClassify::CAttendance::send_attend_final_rward_item @ 0x810e9c0

/* EventClassify::CAttendance::send_attend_final_rward_item(CUser*, int, int) */

void __thiscall
EventClassify::CAttendance::send_attend_final_rward_item
          (CAttendance *this,CUser *param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  CEventActionMng local_25;
  cMyTrace local_24 [16];
  int local_14;
  int local_10;
  
  uVar2 = CUser::get_acc_id(param_1);
  uVar3 = NumberToString(uVar2,0);
  cMyTrace::cMyTrace(local_24,
                     "void EventClassify::CAttendance::send_attend_final_rward_item(CUser*, int, int)"
                     ,0x5ba,0);
  cMyTrace::operator()
            (local_24,"send_attend_final_rward_item m_id:%s day:%d record:%u",uVar3,param_3,param_2)
  ;
  local_14 = 0;
  for (local_10 = 0; local_10 < 0x20; local_10 = local_10 + 1) {
    cVar1 = isSetBit_Uint(param_2,local_10);
    if (cVar1 != '\0') {
      local_14 = local_14 + 1;
    }
  }
  if (param_3 == local_14) {
    *(undefined4 *)(*(int *)(this + 0x1c) + 0x4c) = *(undefined4 *)(*(int *)(this + 0x1c) + 0x1c);
    *(undefined4 *)(*(int *)(this + 0x1c) + 0x50) = *(undefined4 *)(*(int *)(this + 0x1c) + 0x20);
    std::string::operator=
              ((string *)(*(int *)(this + 0x1c) + 0x60),(string *)(*(int *)(this + 0x1c) + 0x74));
    CEventActionMng::process_action_send_mail
              (&local_25,param_1,(Action_SendMail *)(*(int *)(this + 0x1c) + 0x2c),true);
  }
  return;
}
```
