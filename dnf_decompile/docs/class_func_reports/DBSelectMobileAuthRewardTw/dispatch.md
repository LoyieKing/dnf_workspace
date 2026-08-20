# dispatch

`_ZN26DBSelectMobileAuthRewardTw8dispatchEiiP6Stream`

`DBSelectMobileAuthRewardTw::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DBSelectMobileAuthRewardTw` | `0x0815c6a8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0815c6a8  _ZN26DBSelectMobileAuthRewardTw8dispatchEiiP6Stream
#           DBSelectMobileAuthRewardTw::dispatch(int, int, Stream*)
# range [0x0815c6a8, 0x0815c985]
0815c6a8 +0x000:  push   %ebp
0815c6a9 +0x001:  mov    %esp,%ebp
0815c6ab +0x003:  push   %esi
0815c6ac +0x004:  push   %ebx
0815c6ad +0x005:  sub    $0x50,%esp
0815c6b0 +0x008:  movb   $0x1,-0x15(%ebp)
0815c6b4 +0x00c:  mov    0x14(%ebp),%eax
0815c6b7 +0x00f:  mov    %eax,(%esp)
0815c6ba +0x012:  call   0815ebe0 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0xe54>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0xe54
0815c6bf +0x017:  mov    %eax,-0x14(%ebp)
0815c6c2 +0x01a:  cmpl   $0x0,-0x14(%ebp)
0815c6c6 +0x01e:  jne    0815c6f4 <+0x4c>
0815c6c8 +0x020:  movl   $0x4,(%esp)
0815c6cf +0x027:  call   08725800 <__cxa_allocate_exception>
0815c6d4 +0x02c:  mov    %eax,%edx
0815c6d6 +0x02e:  movl   $"msg is null",(%edx)
0815c6dc +0x034:  movl   $0x0,0x8(%esp)
0815c6e4 +0x03c:  movl   $&_ZTIPKc,0x4(%esp)
0815c6ec +0x044:  mov    %eax,(%esp)
0815c6ef +0x047:  call   08724c50 <__cxa_throw>
0815c6f4 +0x04c:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0815c6f9 +0x051:  movl   $0x0,0x8(%esp)
0815c701 +0x059:  movl   $0x9,0x4(%esp)
0815c709 +0x061:  mov    %eax,(%esp)
0815c70c +0x064:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0815c711 +0x069:  mov    %eax,-0x10(%ebp)
0815c714 +0x06c:  cmpl   $0x0,-0x10(%ebp)
0815c718 +0x070:  jne    0815c746 <+0x9e>
0815c71a +0x072:  movl   $0x4,(%esp)
0815c721 +0x079:  call   08725800 <__cxa_allocate_exception>
0815c726 +0x07e:  mov    %eax,%edx
0815c728 +0x080:  movl   $"handle null",(%edx)
0815c72e +0x086:  movl   $0x0,0x8(%esp)
0815c736 +0x08e:  movl   $&_ZTIPKc,0x4(%esp)
0815c73e +0x096:  mov    %eax,(%esp)
0815c741 +0x099:  call   08724c50 <__cxa_throw>
0815c746 +0x09e:  mov    -0x14(%ebp),%eax
0815c749 +0x0a1:  mov    (%eax),%eax
0815c74b +0x0a3:  movl   $0x0,0x4(%esp)
0815c753 +0x0ab:  mov    %eax,(%esp)
0815c756 +0x0ae:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0815c75b +0x0b3:  mov    %eax,0x8(%esp)
0815c75f +0x0b7:  movl   $"seLect m_id from mobile_auth_reward_tw where m_id=%s",0x4(%esp)
0815c767 +0x0bf:  mov    -0x10(%ebp),%eax
0815c76a +0x0c2:  mov    %eax,(%esp)
0815c76d +0x0c5:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0815c772 +0x0ca:  movl   $0x1,0x4(%esp)
0815c77a +0x0d2:  mov    -0x10(%ebp),%eax
0815c77d +0x0d5:  mov    %eax,(%esp)
0815c780 +0x0d8:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0815c785 +0x0dd:  xor    $0x1,%eax
0815c788 +0x0e0:  test   %al,%al
0815c78a +0x0e2:  je     0815c7b8 <+0x110>
0815c78c +0x0e4:  movl   $0x4,(%esp)
0815c793 +0x0eb:  call   08725800 <__cxa_allocate_exception>
0815c798 +0x0f0:  mov    %eax,%edx
0815c79a +0x0f2:  movl   $"select_exec",(%edx)
0815c7a0 +0x0f8:  movl   $0x0,0x8(%esp)
0815c7a8 +0x100:  movl   $&_ZTIPKc,0x4(%esp)
0815c7b0 +0x108:  mov    %eax,(%esp)
0815c7b3 +0x10b:  call   08724c50 <__cxa_throw>
0815c7b8 +0x110:  mov    -0x10(%ebp),%eax
0815c7bb +0x113:  mov    %eax,(%esp)
0815c7be +0x116:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0815c7c3 +0x11b:  test   %eax,%eax
0815c7c5 +0x11d:  sete   %al
0815c7c8 +0x120:  test   %al,%al
0815c7ca +0x122:  je     0815c899 <+0x1f1>
0815c7d0 +0x128:  mov    -0x14(%ebp),%eax
0815c7d3 +0x12b:  mov    (%eax),%eax
0815c7d5 +0x12d:  movl   $0x0,0x4(%esp)
0815c7dd +0x135:  mov    %eax,(%esp)
0815c7e0 +0x138:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0815c7e5 +0x13d:  mov    %eax,0x8(%esp)
0815c7e9 +0x141:  movl   $"inSert into mobile_auth_reward_tw(m_id,occ_date) VALUES(%s,now())",0x4(%esp)
0815c7f1 +0x149:  mov    -0x10(%ebp),%eax
0815c7f4 +0x14c:  mov    %eax,(%esp)
0815c7f7 +0x14f:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0815c7fc +0x154:  movl   $0x1,0x4(%esp)
0815c804 +0x15c:  mov    -0x10(%ebp),%eax
0815c807 +0x15f:  mov    %eax,(%esp)
0815c80a +0x162:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0815c80f +0x167:  xor    $0x1,%eax
0815c812 +0x16a:  test   %al,%al
0815c814 +0x16c:  je     0815c842 <+0x19a>
0815c816 +0x16e:  movl   $0x4,(%esp)
0815c81d +0x175:  call   08725800 <__cxa_allocate_exception>
0815c822 +0x17a:  mov    %eax,%edx
0815c824 +0x17c:  movl   $"insert_exec",(%edx)
0815c82a +0x182:  movl   $0x0,0x8(%esp)
0815c832 +0x18a:  movl   $&_ZTIPKc,0x4(%esp)
0815c83a +0x192:  mov    %eax,(%esp)
0815c83d +0x195:  call   08724c50 <__cxa_throw>
0815c842 +0x19a:  movb   $0x0,-0x15(%ebp)
0815c846 +0x19e:  mov    -0x14(%ebp),%eax
0815c849 +0x1a1:  mov    (%eax),%eax
0815c84b +0x1a3:  movl   $0x0,0x4(%esp)
0815c853 +0x1ab:  mov    %eax,(%esp)
0815c856 +0x1ae:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0815c85b +0x1b3:  mov    %eax,%ebx
0815c85d +0x1b5:  movl   $0x0,0xc(%esp)
0815c865 +0x1bd:  movl   $0x2be,0x8(%esp)
0815c86d +0x1c5:  movl   $&_ZZN26DBSelectMobileAuthRewardTw8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
0815c875 +0x1cd:  lea    -0x38(%ebp),%eax
0815c878 +0x1d0:  mov    %eax,(%esp)
0815c87b +0x1d3:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0815c880 +0x1d8:  mov    %ebx,0x8(%esp)
0815c884 +0x1dc:  movl   $"[Taiwan, MobileAuth] insert mobile_auth_reward_tw. m_id:%s",0x4(%esp)
0815c88c +0x1e4:  lea    -0x38(%ebp),%eax
0815c88f +0x1e7:  mov    %eax,(%esp)
0815c892 +0x1ea:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0815c897 +0x1ef:  jmp    0815c8ee <+0x246>
0815c899 +0x1f1:  movb   $0x1,-0x15(%ebp)
0815c89d +0x1f5:  mov    -0x14(%ebp),%eax
0815c8a0 +0x1f8:  mov    (%eax),%eax
0815c8a2 +0x1fa:  movl   $0x0,0x4(%esp)
0815c8aa +0x202:  mov    %eax,(%esp)
0815c8ad +0x205:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0815c8b2 +0x20a:  mov    %eax,%ebx
0815c8b4 +0x20c:  movl   $0x0,0xc(%esp)
0815c8bc +0x214:  movl   $0x2c3,0x8(%esp)
0815c8c4 +0x21c:  movl   $&_ZZN26DBSelectMobileAuthRewardTw8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
0815c8cc +0x224:  lea    -0x28(%ebp),%eax
0815c8cf +0x227:  mov    %eax,(%esp)
0815c8d2 +0x22a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0815c8d7 +0x22f:  mov    %ebx,0x8(%esp)
0815c8db +0x233:  movl   $"[Taiwan, MobileAuth] select mobile_auth_reward_tw. m_id:%s",0x4(%esp)
0815c8e3 +0x23b:  lea    -0x28(%ebp),%eax
0815c8e6 +0x23e:  mov    %eax,(%esp)
0815c8e9 +0x241:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0815c8ee +0x246:  movzbl -0x15(%ebp),%edx
0815c8f2 +0x24a:  mov    -0x14(%ebp),%eax
0815c8f5 +0x24d:  mov    (%eax),%eax
0815c8f7 +0x24f:  mov    %edx,0x8(%esp)
0815c8fb +0x253:  mov    %eax,0x4(%esp)
0815c8ff +0x257:  mov    0x10(%ebp),%eax
0815c902 +0x25a:  mov    %eax,(%esp)
0815c905 +0x25d:  call   081615ae <_ZN27InterSelectMobileAuthReward11makeRequestEijb>  ; InterSelectMobileAuthReward::makeRequest(int, unsigned int, bool)
0815c90a +0x262:  mov    $0x1,%ebx
0815c90f +0x267:  jmp    0815c97d <+0x2d5>
0815c911 +0x269:  cmp    $0x1,%edx
0815c914 +0x26c:  je     0815c91e <+0x276>
0815c916 +0x26e:  mov    %eax,(%esp)
0815c919 +0x271:  call   08ae3750 <_Unwind_Resume>
0815c91e +0x276:  mov    %eax,(%esp)
0815c921 +0x279:  call   08725ce0 <__cxa_begin_catch>
0815c926 +0x27e:  mov    %eax,-0xc(%ebp)
0815c929 +0x281:  mov    -0xc(%ebp),%eax
0815c92c +0x284:  mov    %eax,0x14(%esp)
0815c930 +0x288:  movl   $"[Taiwan, MobileAuth] mobile_auth_reward_tw. (error:%s)",0x10(%esp)
0815c938 +0x290:  movl   $0x2cd,0xc(%esp)
0815c940 +0x298:  movl   $&_ZZN26DBSelectMobileAuthRewardTw8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
0815c948 +0x2a0:  movl   $"localtaiwan/Dispatcher/Taiwan_DbThread.cpp",0x4(%esp)
0815c950 +0x2a8:  movl   $0x1,(%esp)
0815c957 +0x2af:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0815c95c +0x2b4:  mov    $0x0,%ebx
0815c961 +0x2b9:  call   08725c30 <__cxa_end_catch>
0815c966 +0x2be:  jmp    0815c97d <+0x2d5>
0815c968 +0x2c0:  mov    %edx,%ebx
0815c96a +0x2c2:  mov    %eax,%esi
0815c96c +0x2c4:  call   08725c30 <__cxa_end_catch>
0815c971 +0x2c9:  mov    %esi,%eax
0815c973 +0x2cb:  mov    %ebx,%edx
0815c975 +0x2cd:  mov    %eax,(%esp)
0815c978 +0x2d0:  call   08ae3750 <_Unwind_Resume>
0815c97d +0x2d5:  mov    %ebx,%eax
0815c97f +0x2d7:  add    $0x50,%esp
0815c982 +0x2da:  pop    %ebx
0815c983 +0x2db:  pop    %esi
0815c984 +0x2dc:  pop    %ebp
0815c985 +0x2dd:  ret
```

## 反编译 C

```c
// DBSelectMobileAuthRewardTw::dispatch @ 0x815c6a8

/* DBSelectMobileAuthRewardTw::dispatch(int, int, Stream*) */

undefined4 __thiscall
DBSelectMobileAuthRewardTw::dispatch
          (DBSelectMobileAuthRewardTw *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  cMyTrace local_3c [16];
  cMyTrace local_2c [19];
  bool local_19;
  MSG *local_18;
  MySQL *local_14;
  
  local_19 = true;
                    /* try { // try from 0815c6ba to 0815c909 has its CatchHandler @ 0815c911 */
  local_18 = Stream::GetOutBuffer<DBSelectMobileAuthRewardTw::MSG>(param_3);
  if (local_18 == (MSG *)0x0) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = "msg is null";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  if (local_14 == (MySQL *)0x0) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = "handle null";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  uVar3 = NumberToString(*(uint *)local_18,0);
  MySQL::set_query(local_14,"seLect m_id from mobile_auth_reward_tw where m_id=%s",uVar3);
  cVar1 = MySQL::exec(local_14,true);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = "select_exec";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  iVar4 = MySQL::get_n_rows(local_14);
  if (iVar4 == 0) {
    uVar3 = NumberToString(*(uint *)local_18,0);
    MySQL::set_query(local_14,"inSert into mobile_auth_reward_tw(m_id,occ_date) VALUES(%s,now())",
                     uVar3);
    cVar1 = MySQL::exec(local_14,true);
    if (cVar1 != '\x01') {
      puVar2 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar2 = "insert_exec";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar2,&char_const*::typeinfo,0);
    }
    local_19 = false;
    uVar3 = NumberToString(*(uint *)local_18,0);
    cMyTrace::cMyTrace(local_3c,
                       "virtual bool DBSelectMobileAuthRewardTw::dispatch(int, int, Stream*)",0x2be,
                       0);
    cMyTrace::operator()
              (local_3c,"[Taiwan, MobileAuth] insert mobile_auth_reward_tw. m_id:%s",uVar3);
  }
  else {
    local_19 = true;
    uVar3 = NumberToString(*(uint *)local_18,0);
    cMyTrace::cMyTrace(local_2c,
                       "virtual bool DBSelectMobileAuthRewardTw::dispatch(int, int, Stream*)",0x2c3,
                       0);
    cMyTrace::operator()
              (local_2c,"[Taiwan, MobileAuth] select mobile_auth_reward_tw. m_id:%s",uVar3);
  }
  InterSelectMobileAuthReward::makeRequest(param_2,*(uint *)local_18,local_19);
  return 1;
}
```
