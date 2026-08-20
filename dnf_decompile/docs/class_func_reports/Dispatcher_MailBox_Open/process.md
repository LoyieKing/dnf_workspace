# process

`_ZN23Dispatcher_MailBox_Open7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_MailBox_Open::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_MailBox_Open` | `0x081cc196` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cc196  _ZN23Dispatcher_MailBox_Open7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_MailBox_Open::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081cc196, 0x081cc2a1]
081cc196 +0x000:  push   %ebp
081cc197 +0x001:  mov    %esp,%ebp
081cc199 +0x003:  push   %ebx
081cc19a +0x004:  sub    $0x24,%esp
081cc19d +0x007:  mov    0x14(%ebp),%eax
081cc1a0 +0x00a:  mov    %eax,-0x10(%ebp)
081cc1a3 +0x00d:  mov    0x10(%ebp),%eax
081cc1a6 +0x010:  mov    %eax,0x8(%esp)
081cc1aa +0x014:  mov    0xc(%ebp),%eax
081cc1ad +0x017:  mov    %eax,0x4(%esp)
081cc1b1 +0x01b:  mov    0x8(%ebp),%eax
081cc1b4 +0x01e:  mov    %eax,(%esp)
081cc1b7 +0x021:  call   081cc2a2 <_ZN23Dispatcher_MailBox_Open11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_MailBox_Open::check_error(CUser*, MSG_BASE&)
081cc1bc +0x026:  mov    %eax,%edx
081cc1be +0x028:  mov    -0x10(%ebp),%eax
081cc1c1 +0x02b:  mov    %edx,0x4(%eax)
081cc1c4 +0x02e:  mov    -0x10(%ebp),%eax
081cc1c7 +0x031:  mov    0x4(%eax),%eax
081cc1ca +0x034:  test   %eax,%eax
081cc1cc +0x036:  jle    081cc1d8 <+0x42>
081cc1ce +0x038:  mov    $0x0,%eax
081cc1d3 +0x03d:  jmp    081cc29c <+0x106>
081cc1d8 +0x042:  mov    -0x10(%ebp),%eax
081cc1db +0x045:  mov    0x4(%eax),%eax
081cc1de +0x048:  test   %eax,%eax
081cc1e0 +0x04a:  jns    081cc214 <+0x7e>
081cc1e2 +0x04c:  mov    0xc(%ebp),%eax
081cc1e5 +0x04f:  mov    %eax,(%esp)
081cc1e8 +0x052:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081cc1ed +0x057:  mov    -0x10(%ebp),%edx
081cc1f0 +0x05a:  mov    0x4(%edx),%edx
081cc1f3 +0x05d:  mov    %eax,0xc(%esp)
081cc1f7 +0x061:  mov    %edx,0x8(%esp)
081cc1fb +0x065:  movl   $&_ZZN23Dispatcher_MailBox_Open7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081cc203 +0x06d:  movl   $0x22c8,(%esp)
081cc20a +0x074:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cc20f +0x079:  jmp    081cc29c <+0x106>
081cc214 +0x07e:  mov    0xc(%ebp),%eax
081cc217 +0x081:  mov    %eax,(%esp)
081cc21a +0x084:  call   0823020c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x58b6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x58b6
081cc21f +0x089:  mov    %eax,-0xc(%ebp)
081cc222 +0x08c:  mov    -0xc(%ebp),%eax
081cc225 +0x08f:  mov    %eax,(%esp)
081cc228 +0x092:  call   0823455a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c04>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c04
081cc22d +0x097:  test   %eax,%eax
081cc22f +0x099:  setne  %al
081cc232 +0x09c:  test   %al,%al
081cc234 +0x09e:  je     081cc286 <+0xf0>
081cc236 +0x0a0:  mov    -0xc(%ebp),%eax
081cc239 +0x0a3:  mov    %eax,(%esp)
081cc23c +0x0a6:  call   08234566 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c10>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c10
081cc241 +0x0ab:  mov    %eax,%ebx
081cc243 +0x0ad:  mov    -0xc(%ebp),%eax
081cc246 +0x0b0:  mov    %eax,(%esp)
081cc249 +0x0b3:  call   0823454c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9bf6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9bf6
081cc24e +0x0b8:  lea    (%ebx,%eax,1),%eax
081cc251 +0x0bb:  cmp    $0x13,%eax
081cc254 +0x0be:  setle  %al
081cc257 +0x0c1:  test   %al,%al
081cc259 +0x0c3:  je     081cc286 <+0xf0>
081cc25b +0x0c5:  mov    0xc(%ebp),%eax
081cc25e +0x0c8:  mov    %eax,(%esp)
081cc261 +0x0cb:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081cc266 +0x0d0:  mov    %eax,0x4(%esp)
081cc26a +0x0d4:  mov    0xc(%ebp),%eax
081cc26d +0x0d7:  mov    %eax,(%esp)
081cc270 +0x0da:  call   085552ac <_ZN8WongWork14CMailBoxHelper13ReqDBLoadMailEP5CUserj>  ; WongWork::CMailBoxHelper::ReqDBLoadMail(CUser*, unsigned int)
081cc275 +0x0df:  mov    -0x10(%ebp),%eax
081cc278 +0x0e2:  movl   $0x16,0x4(%eax)
081cc27f +0x0e9:  mov    $0x0,%eax
081cc284 +0x0ee:  jmp    081cc29c <+0x106>
081cc286 +0x0f0:  mov    -0xc(%ebp),%eax
081cc289 +0x0f3:  mov    %eax,(%esp)
081cc28c +0x0f6:  call   0823455a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c04>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c04
081cc291 +0x0fb:  mov    -0x10(%ebp),%edx
081cc294 +0x0fe:  mov    %eax,0x8(%edx)
081cc297 +0x101:  mov    $0x0,%eax
081cc29c +0x106:  add    $0x24,%esp
081cc29f +0x109:  pop    %ebx
081cc2a0 +0x10a:  pop    %ebp
081cc2a1 +0x10b:  ret
```

## 反编译 C

```c
// Dispatcher_MailBox_Open::process @ 0x81cc196

/* Dispatcher_MailBox_Open::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_MailBox_Open::process
          (Dispatcher_MailBox_Open *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  CMailBox *this_00;
  int iVar3;
  int iVar4;
  
  uVar1 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar2 = CUser::get_acc_id(param_1);
      uVar1 = LineFunc(0x22c8,
                       "virtual int Dispatcher_MailBox_Open::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 4),uVar2);
    }
    else {
      this_00 = (CMailBox *)CUser::GetMailBox(param_1);
      iVar3 = WongWork::CMailBox::GetNotLoadedMailCount(this_00);
      if (iVar3 != 0) {
        iVar3 = WongWork::CMailBox::GetRecvSize(this_00);
        iVar4 = WongWork::CMailBox::GetLoadedLetterCount(this_00);
        if (iVar3 + iVar4 < 0x14) {
          uVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
          WongWork::CMailBoxHelper::ReqDBLoadMail(param_1,uVar2);
          *(undefined4 *)(param_3 + 4) = 0x16;
          return 0;
        }
      }
      uVar1 = WongWork::CMailBox::GetNotLoadedMailCount(this_00);
      *(undefined4 *)(param_3 + 8) = uVar1;
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
