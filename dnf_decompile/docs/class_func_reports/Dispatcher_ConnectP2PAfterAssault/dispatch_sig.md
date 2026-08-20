# dispatch_sig

`_ZN33Dispatcher_ConnectP2PAfterAssault12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_ConnectP2PAfterAssault::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ConnectP2PAfterAssault` | `0x08206cfa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08206cfa  _ZN33Dispatcher_ConnectP2PAfterAssault12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_ConnectP2PAfterAssault::dispatch_sig(CUser*, PacketBuf&)
# range [0x08206cfa, 0x08206f0f]
08206cfa +0x000:  push   %ebp
08206cfb +0x001:  mov    %esp,%ebp
08206cfd +0x003:  push   %ebx
08206cfe +0x004:  sub    $0x24,%esp
08206d01 +0x007:  mov    0xc(%ebp),%eax
08206d04 +0x00a:  mov    %eax,(%esp)
08206d07 +0x00d:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08206d0c +0x012:  cmp    $0x1,%eax
08206d0f +0x015:  setle  %al
08206d12 +0x018:  test   %al,%al
08206d14 +0x01a:  je     08206d3f <+0x45>
08206d16 +0x01c:  movl   $0x0,0xc(%esp)
08206d1e +0x024:  movl   $0x0,0x8(%esp)
08206d26 +0x02c:  movl   $&_ZZN33Dispatcher_ConnectP2PAfterAssault12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08206d2e +0x034:  movl   $0xa16f,(%esp)
08206d35 +0x03b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08206d3a +0x040:  jmp    08206f0a <+0x210>
08206d3f +0x045:  movb   $0xff,-0xd(%ebp)
08206d43 +0x049:  lea    -0xd(%ebp),%eax
08206d46 +0x04c:  mov    %eax,0x4(%esp)
08206d4a +0x050:  mov    0x10(%ebp),%eax
08206d4d +0x053:  mov    %eax,(%esp)
08206d50 +0x056:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
08206d55 +0x05b:  xor    $0x1,%eax
08206d58 +0x05e:  test   %al,%al
08206d5a +0x060:  je     08206d85 <+0x8b>
08206d5c +0x062:  movl   $0x0,0xc(%esp)
08206d64 +0x06a:  movl   $0x0,0x8(%esp)
08206d6c +0x072:  movl   $&_ZZN33Dispatcher_ConnectP2PAfterAssault12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08206d74 +0x07a:  movl   $0xa173,(%esp)
08206d7b +0x081:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08206d80 +0x086:  jmp    08206f0a <+0x210>
08206d85 +0x08b:  movzbl -0xd(%ebp),%eax
08206d89 +0x08f:  cmp    $0x4,%al
08206d8b +0x091:  jg     08206d95 <+0x9b>
08206d8d +0x093:  movzbl -0xd(%ebp),%eax
08206d91 +0x097:  test   %al,%al
08206d93 +0x099:  jns    08206dbe <+0xc4>
08206d95 +0x09b:  movl   $0x0,0xc(%esp)
08206d9d +0x0a3:  movl   $0x0,0x8(%esp)
08206da5 +0x0ab:  movl   $&_ZZN33Dispatcher_ConnectP2PAfterAssault12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08206dad +0x0b3:  movl   $0xa177,(%esp)
08206db4 +0x0ba:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08206db9 +0x0bf:  jmp    08206f0a <+0x210>
08206dbe +0x0c4:  movl   $0x0,-0x11(%ebp)
08206dc5 +0x0cb:  movb   $0xff,-0x12(%ebp)
08206dc9 +0x0cf:  movl   $0x0,-0xc(%ebp)
08206dd0 +0x0d6:  jmp    08206e9d <+0x1a3>
08206dd5 +0x0db:  lea    -0x12(%ebp),%eax
08206dd8 +0x0de:  mov    %eax,0x4(%esp)
08206ddc +0x0e2:  mov    0x10(%ebp),%eax
08206ddf +0x0e5:  mov    %eax,(%esp)
08206de2 +0x0e8:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
08206de7 +0x0ed:  xor    $0x1,%eax
08206dea +0x0f0:  test   %al,%al
08206dec +0x0f2:  je     08206e17 <+0x11d>
08206dee +0x0f4:  movl   $0x0,0xc(%esp)
08206df6 +0x0fc:  movl   $0x0,0x8(%esp)
08206dfe +0x104:  movl   $&_ZZN33Dispatcher_ConnectP2PAfterAssault12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08206e06 +0x10c:  movl   $0xa17e,(%esp)
08206e0d +0x113:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08206e12 +0x118:  jmp    08206f0a <+0x210>
08206e17 +0x11d:  movzbl -0x12(%ebp),%eax
08206e1b +0x121:  cmp    $0x3,%al
08206e1d +0x123:  jg     08206e27 <+0x12d>
08206e1f +0x125:  movzbl -0x12(%ebp),%eax
08206e23 +0x129:  test   %al,%al
08206e25 +0x12b:  jns    08206e50 <+0x156>
08206e27 +0x12d:  movl   $0x0,0xc(%esp)
08206e2f +0x135:  movl   $0x0,0x8(%esp)
08206e37 +0x13d:  movl   $&_ZZN33Dispatcher_ConnectP2PAfterAssault12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08206e3f +0x145:  movl   $0xa182,(%esp)
08206e46 +0x14c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08206e4b +0x151:  jmp    08206f0a <+0x210>
08206e50 +0x156:  movzbl -0x12(%ebp),%eax
08206e54 +0x15a:  movsbl %al,%eax
08206e57 +0x15d:  lea    -0x11(%ebp),%edx
08206e5a +0x160:  lea    (%edx,%eax,1),%eax
08206e5d +0x163:  mov    %eax,0x4(%esp)
08206e61 +0x167:  mov    0x10(%ebp),%eax
08206e64 +0x16a:  mov    %eax,(%esp)
08206e67 +0x16d:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
08206e6c +0x172:  xor    $0x1,%eax
08206e6f +0x175:  test   %al,%al
08206e71 +0x177:  je     08206e99 <+0x19f>
08206e73 +0x179:  movl   $0x0,0xc(%esp)
08206e7b +0x181:  movl   $0x0,0x8(%esp)
08206e83 +0x189:  movl   $&_ZZN33Dispatcher_ConnectP2PAfterAssault12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08206e8b +0x191:  movl   $0xa189,(%esp)
08206e92 +0x198:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08206e97 +0x19d:  jmp    08206f0a <+0x210>
08206e99 +0x19f:  addl   $0x1,-0xc(%ebp)
08206e9d +0x1a3:  movzbl -0xd(%ebp),%eax
08206ea1 +0x1a7:  movsbl %al,%eax
08206ea4 +0x1aa:  cmp    -0xc(%ebp),%eax
08206ea7 +0x1ad:  setg   %al
08206eaa +0x1b0:  test   %al,%al
08206eac +0x1b2:  jne    08206dd5 <+0xdb>
08206eb2 +0x1b8:  movzbl -0xd(%ebp),%eax
08206eb6 +0x1bc:  movsbl %al,%ebx
08206eb9 +0x1bf:  call   082350a0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa74a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa74a
08206ebe +0x1c4:  mov    %ebx,0xc(%esp)
08206ec2 +0x1c8:  lea    -0x11(%ebp),%edx
08206ec5 +0x1cb:  mov    %edx,0x8(%esp)
08206ec9 +0x1cf:  mov    0xc(%ebp),%edx
08206ecc +0x1d2:  mov    %edx,0x4(%esp)
08206ed0 +0x1d6:  mov    %eax,(%esp)
08206ed3 +0x1d9:  call   082ef320 <_ZN11pvp_assault11CAssaultMgr24OnConnectP2PAfterAssaultEP5CUserPci>  ; pvp_assault::CAssaultMgr::OnConnectP2PAfterAssault(CUser*, char*, int)
08206ed8 +0x1de:  xor    $0x1,%eax
08206edb +0x1e1:  test   %al,%al
08206edd +0x1e3:  je     08206f05 <+0x20b>
08206edf +0x1e5:  movl   $0x0,0xc(%esp)
08206ee7 +0x1ed:  movl   $0x0,0x8(%esp)
08206eef +0x1f5:  movl   $&_ZZN33Dispatcher_ConnectP2PAfterAssault12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08206ef7 +0x1fd:  movl   $0xa18f,(%esp)
08206efe +0x204:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08206f03 +0x209:  jmp    08206f0a <+0x210>
08206f05 +0x20b:  mov    $0x0,%eax
08206f0a +0x210:  add    $0x24,%esp
08206f0d +0x213:  pop    %ebx
08206f0e +0x214:  pop    %ebp
08206f0f +0x215:  ret
```

## 反编译 C

```c
// Dispatcher_ConnectP2PAfterAssault::dispatch_sig @ 0x8206cfa

/* Dispatcher_ConnectP2PAfterAssault::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_ConnectP2PAfterAssault::dispatch_sig
          (Dispatcher_ConnectP2PAfterAssault *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  CUser *pCVar4;
  char local_16;
  char local_15 [5];
  int local_10;
  
  iVar2 = CUser::get_state(param_1);
  if (iVar2 < 2) {
    uVar3 = LineFunc(0xa16f,
                     "virtual int Dispatcher_ConnectP2PAfterAssault::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else {
    local_15[4] = -1;
    cVar1 = PacketBuf::get_byte(param_2,local_15 + 4);
    if (cVar1 == '\x01') {
      if ((local_15[4] < '\x05') && (-1 < local_15[4])) {
        local_15[0] = '\0';
        local_15[1] = '\0';
        local_15[2] = '\0';
        local_15[3] = '\0';
        local_16 = -1;
        for (local_10 = 0; local_10 < local_15[4]; local_10 = local_10 + 1) {
          cVar1 = PacketBuf::get_byte(param_2,&local_16);
          if (cVar1 != '\x01') {
            uVar3 = LineFunc(0xa17e,
                             "virtual int Dispatcher_ConnectP2PAfterAssault::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
            return uVar3;
          }
          if (('\x03' < local_16) || (local_16 < '\0')) {
            uVar3 = LineFunc(0xa182,
                             "virtual int Dispatcher_ConnectP2PAfterAssault::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
            return uVar3;
          }
          cVar1 = PacketBuf::get_byte(param_2,local_15 + local_16);
          if (cVar1 != '\x01') {
            uVar3 = LineFunc(0xa189,
                             "virtual int Dispatcher_ConnectP2PAfterAssault::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
            return uVar3;
          }
        }
        pCVar4 = (CUser *)pvp_assault::GetInstanceAssaultMgr();
        cVar1 = pvp_assault::CAssaultMgr::OnConnectP2PAfterAssault
                          (pCVar4,(char *)param_1,(int)local_15);
        if (cVar1 == '\x01') {
          uVar3 = 0;
        }
        else {
          uVar3 = LineFunc(0xa18f,
                           "virtual int Dispatcher_ConnectP2PAfterAssault::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
        }
      }
      else {
        uVar3 = LineFunc(0xa177,
                         "virtual int Dispatcher_ConnectP2PAfterAssault::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
      }
    }
    else {
      uVar3 = LineFunc(0xa173,
                       "virtual int Dispatcher_ConnectP2PAfterAssault::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
  }
  return uVar3;
}
```
