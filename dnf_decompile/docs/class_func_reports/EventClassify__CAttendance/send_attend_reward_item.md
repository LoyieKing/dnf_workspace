# send_attend_reward_item

`_ZN13EventClassify11CAttendance23send_attend_reward_itemEP5CUseri`

`EventClassify::CAttendance::send_attend_reward_item(CUser*, int)`

| 类 | 地址 |
|---|---|
| `EventClassify::CAttendance` | `0x0810e878` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810e878  _ZN13EventClassify11CAttendance23send_attend_reward_itemEP5CUseri
#           EventClassify::CAttendance::send_attend_reward_item(CUser*, int)
# range [0x0810e878, 0x0810e9bf]
0810e878 +0x000:  push   %ebp
0810e879 +0x001:  mov    %esp,%ebp
0810e87b +0x003:  push   %ebx
0810e87c +0x004:  sub    $0x34,%esp
0810e87f +0x007:  mov    0x8(%ebp),%eax
0810e882 +0x00a:  mov    0x1c(%eax),%eax
0810e885 +0x00d:  add    $0x10,%eax
0810e888 +0x010:  mov    %eax,(%esp)
0810e88b +0x013:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
0810e890 +0x018:  test   %eax,%eax
0810e892 +0x01a:  sete   %al
0810e895 +0x01d:  test   %al,%al
0810e897 +0x01f:  jne    0810e9b2 <+0x13a>
0810e89d +0x025:  cmpl   $0x0,0x10(%ebp)
0810e8a1 +0x029:  js     0810e9b5 <+0x13d>
0810e8a7 +0x02f:  mov    0x8(%ebp),%eax
0810e8aa +0x032:  mov    0x1c(%eax),%eax
0810e8ad +0x035:  add    $0x10,%eax
0810e8b0 +0x038:  mov    %eax,(%esp)
0810e8b3 +0x03b:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
0810e8b8 +0x040:  cmp    0x10(%ebp),%eax
0810e8bb +0x043:  setle  %al
0810e8be +0x046:  test   %al,%al
0810e8c0 +0x048:  jne    0810e9b8 <+0x140>
0810e8c6 +0x04e:  mov    0xc(%ebp),%eax
0810e8c9 +0x051:  mov    %eax,(%esp)
0810e8cc +0x054:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0810e8d1 +0x059:  movl   $0x0,0x4(%esp)
0810e8d9 +0x061:  mov    %eax,(%esp)
0810e8dc +0x064:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0810e8e1 +0x069:  mov    %eax,%ebx
0810e8e3 +0x06b:  movl   $0x0,0xc(%esp)
0810e8eb +0x073:  movl   $0x5ad,0x8(%esp)
0810e8f3 +0x07b:  movl   $&_ZZN13EventClassify11CAttendance23send_attend_reward_itemEP5CUseriE19__PRETTY_FUNCTION__,0x4(%esp)
0810e8fb +0x083:  lea    -0x18(%ebp),%eax
0810e8fe +0x086:  mov    %eax,(%esp)
0810e901 +0x089:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0810e906 +0x08e:  mov    0x10(%ebp),%eax
0810e909 +0x091:  mov    %eax,0xc(%esp)
0810e90d +0x095:  mov    %ebx,0x8(%esp)
0810e911 +0x099:  movl   $"send_attend_reward_item m_id:%s day:%d",0x4(%esp)
0810e919 +0x0a1:  lea    -0x18(%ebp),%eax
0810e91c +0x0a4:  mov    %eax,(%esp)
0810e91f +0x0a7:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0810e924 +0x0ac:  mov    0x8(%ebp),%eax
0810e927 +0x0af:  mov    0x1c(%eax),%ebx
0810e92a +0x0b2:  mov    0x10(%ebp),%eax
0810e92d +0x0b5:  mov    0x8(%ebp),%edx
0810e930 +0x0b8:  mov    0x1c(%edx),%edx
0810e933 +0x0bb:  add    $0x10,%edx
0810e936 +0x0be:  mov    %eax,0x4(%esp)
0810e93a +0x0c2:  mov    %edx,(%esp)
0810e93d +0x0c5:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
0810e942 +0x0ca:  mov    (%eax),%eax
0810e944 +0x0cc:  mov    %eax,0x4c(%ebx)
0810e947 +0x0cf:  mov    0x8(%ebp),%eax
0810e94a +0x0d2:  mov    0x1c(%eax),%ebx
0810e94d +0x0d5:  mov    0x10(%ebp),%eax
0810e950 +0x0d8:  mov    0x8(%ebp),%edx
0810e953 +0x0db:  mov    0x1c(%edx),%edx
0810e956 +0x0de:  add    $0x10,%edx
0810e959 +0x0e1:  mov    %eax,0x4(%esp)
0810e95d +0x0e5:  mov    %edx,(%esp)
0810e960 +0x0e8:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
0810e965 +0x0ed:  mov    0x4(%eax),%eax
0810e968 +0x0f0:  mov    %eax,0x50(%ebx)
0810e96b +0x0f3:  mov    0x8(%ebp),%eax
0810e96e +0x0f6:  mov    0x1c(%eax),%eax
0810e971 +0x0f9:  lea    0x70(%eax),%edx
0810e974 +0x0fc:  mov    0x8(%ebp),%eax
0810e977 +0x0ff:  mov    0x1c(%eax),%eax
0810e97a +0x102:  add    $0x60,%eax
0810e97d +0x105:  mov    %edx,0x4(%esp)
0810e981 +0x109:  mov    %eax,(%esp)
0810e984 +0x10c:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
0810e989 +0x111:  mov    0x8(%ebp),%eax
0810e98c +0x114:  mov    0x1c(%eax),%eax
0810e98f +0x117:  add    $0x2c,%eax
0810e992 +0x11a:  movl   $0x1,0xc(%esp)
0810e99a +0x122:  mov    %eax,0x8(%esp)
0810e99e +0x126:  mov    0xc(%ebp),%eax
0810e9a1 +0x129:  mov    %eax,0x4(%esp)
0810e9a5 +0x12d:  lea    -0x19(%ebp),%eax
0810e9a8 +0x130:  mov    %eax,(%esp)
0810e9ab +0x133:  call   0810cf32 <_ZN13EventClassify15CEventActionMng24process_action_send_mailEP5CUserR15Action_SendMailb>  ; EventClassify::CEventActionMng::process_action_send_mail(CUser*, Action_SendMail&, bool)
0810e9b0 +0x138:  jmp    0810e9b9 <+0x141>
0810e9b2 +0x13a:  nop
0810e9b3 +0x13b:  jmp    0810e9b9 <+0x141>
0810e9b5 +0x13d:  nop
0810e9b6 +0x13e:  jmp    0810e9b9 <+0x141>
0810e9b8 +0x140:  nop
0810e9b9 +0x141:  add    $0x34,%esp
0810e9bc +0x144:  pop    %ebx
0810e9bd +0x145:  pop    %ebp
0810e9be +0x146:  ret
0810e9bf +0x147:  nop
```

## 反编译 C

```c
// EventClassify::CAttendance::send_attend_reward_item @ 0x810e878

/* EventClassify::CAttendance::send_attend_reward_item(CUser*, int) */

void __thiscall
EventClassify::CAttendance::send_attend_reward_item(CAttendance *this,CUser *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  CEventActionMng local_1d;
  cMyTrace local_1c [20];
  
  iVar1 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                    ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                     (*(int *)(this + 0x1c) + 0x10));
  if (((iVar1 != 0) && (-1 < param_2)) &&
     (iVar1 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                        ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                         (*(int *)(this + 0x1c) + 0x10)), param_2 < iVar1)) {
    uVar2 = CUser::get_acc_id(param_1);
    uVar3 = NumberToString(uVar2,0);
    cMyTrace::cMyTrace(local_1c,
                       "void EventClassify::CAttendance::send_attend_reward_item(CUser*, int)",0x5ad
                       ,0);
    cMyTrace::operator()(local_1c,"send_attend_reward_item m_id:%s day:%d",uVar3,param_2);
    iVar1 = *(int *)(this + 0x1c);
    puVar4 = (undefined4 *)
             std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                       ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                        (*(int *)(this + 0x1c) + 0x10),param_2);
    *(undefined4 *)(iVar1 + 0x4c) = *puVar4;
    iVar1 = *(int *)(this + 0x1c);
    iVar5 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                      ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                       (*(int *)(this + 0x1c) + 0x10),param_2);
    *(undefined4 *)(iVar1 + 0x50) = *(undefined4 *)(iVar5 + 4);
    std::string::operator=
              ((string *)(*(int *)(this + 0x1c) + 0x60),(string *)(*(int *)(this + 0x1c) + 0x70));
    CEventActionMng::process_action_send_mail
              (&local_1d,param_1,(Action_SendMail *)(*(int *)(this + 0x1c) + 0x2c),true);
  }
  return;
}
```
