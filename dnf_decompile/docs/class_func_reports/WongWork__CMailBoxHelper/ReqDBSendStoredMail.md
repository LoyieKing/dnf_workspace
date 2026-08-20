# ReqDBSendStoredMail

`_ZN8WongWork14CMailBoxHelper19ReqDBSendStoredMailEP5CUser`

`WongWork::CMailBoxHelper::ReqDBSendStoredMail(CUser*)`

| 类 | 地址 |
|---|---|
| `WongWork::CMailBoxHelper` | `0x085566ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085566ae  _ZN8WongWork14CMailBoxHelper19ReqDBSendStoredMailEP5CUser
#           WongWork::CMailBoxHelper::ReqDBSendStoredMail(CUser*)
# range [0x085566ae, 0x08556771]
085566ae +0x00:  push   %ebp
085566af +0x01:  mov    %esp,%ebp
085566b1 +0x03:  sub    $0x28,%esp
085566b4 +0x06:  mov    0x8(%ebp),%eax
085566b7 +0x09:  mov    %eax,(%esp)
085566ba +0x0c:  call   0823020c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x58b6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x58b6
085566bf +0x11:  mov    %eax,-0xc(%ebp)
085566c2 +0x14:  cmpl   $0x0,-0xc(%ebp)
085566c6 +0x18:  je     0855676b <+0xbd>
085566cc +0x1e:  mov    -0xc(%ebp),%eax
085566cf +0x21:  add    $0x58,%eax
085566d2 +0x24:  mov    %eax,(%esp)
085566d5 +0x27:  call   0855839e <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xeff>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xeff
085566da +0x2c:  test   %al,%al
085566dc +0x2e:  jne    0855676e <+0xc0>
085566e2 +0x34:  mov    -0xc(%ebp),%eax
085566e5 +0x37:  lea    0x58(%eax),%edx
085566e8 +0x3a:  lea    -0x10(%ebp),%eax
085566eb +0x3d:  mov    %edx,0x4(%esp)
085566ef +0x41:  mov    %eax,(%esp)
085566f2 +0x44:  call   085583b0 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xf11>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xf11
085566f7 +0x49:  sub    $0x4,%esp
085566fa +0x4c:  mov    -0xc(%ebp),%eax
085566fd +0x4f:  lea    0x58(%eax),%edx
08556700 +0x52:  lea    -0x14(%ebp),%eax
08556703 +0x55:  mov    %edx,0x4(%esp)
08556707 +0x59:  mov    %eax,(%esp)
0855670a +0x5c:  call   085583d6 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xf37>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xf37
0855670f +0x61:  sub    $0x4,%esp
08556712 +0x64:  jmp    08556745 <+0x97>
08556714 +0x66:  lea    -0x10(%ebp),%eax
08556717 +0x69:  mov    %eax,(%esp)
0855671a +0x6c:  call   08558422 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xf83>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xf83
0855671f +0x71:  mov    (%eax),%edx
08556721 +0x73:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08556726 +0x78:  mov    %edx,0x8(%esp)
0855672a +0x7c:  movl   $0x2,0x4(%esp)
08556732 +0x84:  mov    %eax,(%esp)
08556735 +0x87:  call   08571008 <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXEP6Stream>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, Stream*)
0855673a +0x8c:  lea    -0x10(%ebp),%eax
0855673d +0x8f:  mov    %eax,(%esp)
08556740 +0x92:  call   0855840e <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xf6f>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xf6f
08556745 +0x97:  lea    -0x14(%ebp),%eax
08556748 +0x9a:  mov    %eax,0x4(%esp)
0855674c +0x9e:  lea    -0x10(%ebp),%eax
0855674f +0xa1:  mov    %eax,(%esp)
08556752 +0xa4:  call   085583fa <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xf5b>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xf5b
08556757 +0xa9:  test   %al,%al
08556759 +0xab:  jne    08556714 <+0x66>
0855675b +0xad:  mov    -0xc(%ebp),%eax
0855675e +0xb0:  add    $0x58,%eax
08556761 +0xb3:  mov    %eax,(%esp)
08556764 +0xb6:  call   08558430 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xf91>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xf91
08556769 +0xbb:  jmp    0855676f <+0xc1>
0855676b +0xbd:  nop
0855676c +0xbe:  jmp    0855676f <+0xc1>
0855676e +0xc0:  nop
0855676f +0xc1:  leave
08556770 +0xc2:  ret
08556771 +0xc3:  nop
```

## 反编译 C

```c
// WongWork::CMailBoxHelper::ReqDBSendStoredMail @ 0x85566ae

/* WongWork::CMailBoxHelper::ReqDBSendStoredMail(CUser*) */

void WongWork::CMailBoxHelper::ReqDBSendStoredMail(CUser *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  _List_iterator local_18 [4];
  _List_iterator<Stream*> local_14 [4];
  int local_10;
  
  local_10 = CUser::GetMailBox(param_1);
  if ((local_10 != 0) &&
     (cVar1 = std::list<Stream*,std::allocator<Stream*>>::empty
                        ((list<Stream*,std::allocator<Stream*>> *)(local_10 + 0x58)), cVar1 == '\0')
     ) {
    std::list<Stream*,std::allocator<Stream*>>::begin();
    std::list<Stream*,std::allocator<Stream*>>::end();
    while (cVar1 = std::_List_iterator<Stream*>::operator!=(local_14,local_18), cVar1 != '\0') {
      puVar2 = (undefined4 *)std::_List_iterator<Stream*>::operator*(local_14);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,*puVar2);
      std::_List_iterator<Stream*>::operator++(local_14);
    }
    std::list<Stream*,std::allocator<Stream*>>::clear
              ((list<Stream*,std::allocator<Stream*>> *)(local_10 + 0x58));
  }
  return;
}
```
