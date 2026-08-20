# dispatch

`_ZN15DB_DeleteCharac8dispatchEiiP6Stream`

`DB_DeleteCharac::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_DeleteCharac` | `0x08402c38` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08402c38  _ZN15DB_DeleteCharac8dispatchEiiP6Stream
#           DB_DeleteCharac::dispatch(int, int, Stream*)
# range [0x08402c38, 0x08402f4b]
08402c38 +0x000:  push   %ebp
08402c39 +0x001:  mov    %esp,%ebp
08402c3b +0x003:  push   %esi
08402c3c +0x004:  push   %ebx
08402c3d +0x005:  sub    $0x370,%esp
08402c43 +0x00b:  mov    0x8(%ebp),%eax
08402c46 +0x00e:  mov    0x14(%ebp),%edx
08402c49 +0x011:  mov    %edx,0xc(%esp)
08402c4d +0x015:  mov    0x10(%ebp),%edx
08402c50 +0x018:  mov    %edx,0x8(%esp)
08402c54 +0x01c:  mov    0xc(%ebp),%edx
08402c57 +0x01f:  mov    %edx,0x4(%esp)
08402c5b +0x023:  mov    %eax,(%esp)
08402c5e +0x026:  call   083fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>  ; DBDispatcher::dispatch(int, int, Stream*)
08402c63 +0x02b:  xor    $0x1,%eax
08402c66 +0x02e:  test   %al,%al
08402c68 +0x030:  je     08402c74 <+0x3c>
08402c6a +0x032:  mov    $0x0,%eax
08402c6f +0x037:  jmp    08402f42 <+0x30a>
08402c74 +0x03c:  mov    0x14(%ebp),%eax
08402c77 +0x03f:  mov    %eax,(%esp)
08402c7a +0x042:  call   08450540 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3156>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3156
08402c7f +0x047:  mov    %eax,-0x14(%ebp)
08402c82 +0x04a:  cmpl   $0x0,-0x14(%ebp)
08402c86 +0x04e:  jne    08402c92 <+0x5a>
08402c88 +0x050:  mov    $0x0,%eax
08402c8d +0x055:  jmp    08402f42 <+0x30a>
08402c92 +0x05a:  mov    -0x14(%ebp),%eax
08402c95 +0x05d:  movl   $0x0,0x8(%eax)
08402c9c +0x064:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08402ca3 +0x06b:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08402ca8 +0x070:  mov    %eax,-0x10(%ebp)
08402cab +0x073:  lea    -0x358(%ebp),%eax
08402cb1 +0x079:  mov    %eax,%ebx
08402cb3 +0x07b:  mov    $0x63,%esi
08402cb8 +0x080:  jmp    08402cc8 <+0x90>
08402cba +0x082:  mov    %ebx,(%esp)
08402cbd +0x085:  call   0844d406 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1c
08402cc2 +0x08a:  add    $0x8,%ebx
08402cc5 +0x08d:  sub    $0x1,%esi
08402cc8 +0x090:  cmp    $0xffffffff,%esi
08402ccb +0x093:  setne  %al
08402cce +0x096:  test   %al,%al
08402cd0 +0x098:  jne    08402cba <+0x82>
08402cd2 +0x09a:  mov    -0x14(%ebp),%eax
08402cd5 +0x09d:  mov    0x4(%eax),%eax
08402cd8 +0x0a0:  lea    -0x358(%ebp),%edx
08402cde +0x0a6:  mov    %edx,0x4(%esp)
08402ce2 +0x0aa:  mov    %eax,(%esp)
08402ce5 +0x0ad:  call   0840d766 <_ZN16DB_LoadInventory11GetItemLockEjP14stItemLockInfo>  ; DB_LoadInventory::GetItemLock(unsigned int, stItemLockInfo*)
08402cea +0x0b2:  test   %eax,%eax
08402cec +0x0b4:  sete   %al
08402cef +0x0b7:  test   %al,%al
08402cf1 +0x0b9:  je     08402d8a <+0x152>
08402cf7 +0x0bf:  movl   $0x0,-0xc(%ebp)
08402cfe +0x0c6:  jmp    08402d7b <+0x143>
08402d00 +0x0c8:  mov    -0xc(%ebp),%eax
08402d03 +0x0cb:  movzbl -0x354(%ebp,%eax,8),%eax
08402d0b +0x0d3:  cmp    $0x1,%al
08402d0d +0x0d5:  je     08402d32 <+0xfa>
08402d0f +0x0d7:  mov    -0xc(%ebp),%eax
08402d12 +0x0da:  movzbl -0x354(%ebp,%eax,8),%eax
08402d1a +0x0e2:  cmp    $0x2,%al
08402d1c +0x0e4:  jne    08402d77 <+0x13f>
08402d1e +0x0e6:  mov    -0xc(%ebp),%eax
08402d21 +0x0e9:  mov    -0x358(%ebp,%eax,8),%eax
08402d28 +0x0f0:  add    $0x3f480,%eax
08402d2d +0x0f5:  cmp    -0x10(%ebp),%eax
08402d30 +0x0f8:  jle    08402d77 <+0x13f>
08402d32 +0x0fa:  mov    -0x14(%ebp),%eax
08402d35 +0x0fd:  movl   $0x3,0x8(%eax)
08402d3c +0x104:  mov    -0x14(%ebp),%eax
08402d3f +0x107:  mov    %eax,0xc(%esp)
08402d43 +0x10b:  mov    0x10(%ebp),%eax
08402d46 +0x10e:  mov    %eax,0x8(%esp)
08402d4a +0x112:  mov    0xc(%ebp),%eax
08402d4d +0x115:  mov    %eax,0x4(%esp)
08402d51 +0x119:  mov    0x8(%ebp),%eax
08402d54 +0x11c:  mov    %eax,(%esp)
08402d57 +0x11f:  call   084034fe <_ZN15DB_DeleteCharac10SendResultEiiP17SIG_DELETE_CHARAC>  ; DB_DeleteCharac::SendResult(int, int, SIG_DELETE_CHARAC*)
08402d5c +0x124:  xor    $0x1,%eax
08402d5f +0x127:  test   %al,%al
08402d61 +0x129:  je     08402d6d <+0x135>
08402d63 +0x12b:  mov    $0x0,%eax
08402d68 +0x130:  jmp    08402f42 <+0x30a>
08402d6d +0x135:  mov    $0x1,%eax
08402d72 +0x13a:  jmp    08402f42 <+0x30a>
08402d77 +0x13f:  addl   $0x1,-0xc(%ebp)
08402d7b +0x143:  cmpl   $0x63,-0xc(%ebp)
08402d7f +0x147:  setle  %al
08402d82 +0x14a:  test   %al,%al
08402d84 +0x14c:  jne    08402d00 <+0xc8>
08402d8a +0x152:  mov    -0x14(%ebp),%eax
08402d8d +0x155:  mov    %eax,0x4(%esp)
08402d91 +0x159:  mov    0x8(%ebp),%eax
08402d94 +0x15c:  mov    %eax,(%esp)
08402d97 +0x15f:  call   08402f4c <_ZN15DB_DeleteCharac15DeleteGuildInfoEP17SIG_DELETE_CHARAC>  ; DB_DeleteCharac::DeleteGuildInfo(SIG_DELETE_CHARAC*)
08402d9c +0x164:  xor    $0x1,%eax
08402d9f +0x167:  test   %al,%al
08402da1 +0x169:  je     08402e3c <+0x204>
08402da7 +0x16f:  mov    -0x14(%ebp),%eax
08402daa +0x172:  mov    0xc(%eax),%esi
08402dad +0x175:  mov    -0x14(%ebp),%eax
08402db0 +0x178:  mov    0x4(%eax),%ebx
08402db3 +0x17b:  movl   $0x0,0xc(%esp)
08402dbb +0x183:  movl   $0x12a7,0x8(%esp)
08402dc3 +0x18b:  movl   $&_ZZN15DB_DeleteCharac8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
08402dcb +0x193:  lea    -0x38(%ebp),%eax
08402dce +0x196:  mov    %eax,(%esp)
08402dd1 +0x199:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08402dd6 +0x19e:  mov    %esi,0x14(%esp)
08402dda +0x1a2:  mov    %ebx,0x10(%esp)
08402dde +0x1a6:  movl   $0x12a7,0xc(%esp)
08402de6 +0x1ae:  movl   $&_ZZN15DB_DeleteCharac8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
08402dee +0x1b6:  movl   $"[%s][%d] deLete charac(%d),guild_id(%d) FAIL",0x4(%esp)
08402df6 +0x1be:  lea    -0x38(%ebp),%eax
08402df9 +0x1c1:  mov    %eax,(%esp)
08402dfc +0x1c4:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08402e01 +0x1c9:  mov    -0x14(%ebp),%eax
08402e04 +0x1cc:  mov    %eax,0xc(%esp)
08402e08 +0x1d0:  mov    0x10(%ebp),%eax
08402e0b +0x1d3:  mov    %eax,0x8(%esp)
08402e0f +0x1d7:  mov    0xc(%ebp),%eax
08402e12 +0x1da:  mov    %eax,0x4(%esp)
08402e16 +0x1de:  mov    0x8(%ebp),%eax
08402e19 +0x1e1:  mov    %eax,(%esp)
08402e1c +0x1e4:  call   084034fe <_ZN15DB_DeleteCharac10SendResultEiiP17SIG_DELETE_CHARAC>  ; DB_DeleteCharac::SendResult(int, int, SIG_DELETE_CHARAC*)
08402e21 +0x1e9:  xor    $0x1,%eax
08402e24 +0x1ec:  test   %al,%al
08402e26 +0x1ee:  je     08402e32 <+0x1fa>
08402e28 +0x1f0:  mov    $0x0,%eax
08402e2d +0x1f5:  jmp    08402f42 <+0x30a>
08402e32 +0x1fa:  mov    $0x1,%eax
08402e37 +0x1ff:  jmp    08402f42 <+0x30a>
08402e3c +0x204:  mov    -0x14(%ebp),%eax
08402e3f +0x207:  movb   $0x0,0x10(%eax)
08402e43 +0x20b:  mov    -0x14(%ebp),%eax
08402e46 +0x20e:  mov    %eax,0x4(%esp)
08402e4a +0x212:  mov    0x8(%ebp),%eax
08402e4d +0x215:  mov    %eax,(%esp)
08402e50 +0x218:  call   08403324 <_ZN15DB_DeleteCharac21CheckEventCharacter40EP17SIG_DELETE_CHARAC>  ; DB_DeleteCharac::CheckEventCharacter40(SIG_DELETE_CHARAC*)
08402e55 +0x21d:  test   %al,%al
08402e57 +0x21f:  je     08402e72 <+0x23a>
08402e59 +0x221:  mov    -0x14(%ebp),%eax
08402e5c +0x224:  mov    %eax,0x4(%esp)
08402e60 +0x228:  mov    0x8(%ebp),%eax
08402e63 +0x22b:  mov    %eax,(%esp)
08402e66 +0x22e:  call   084032aa <_ZN15DB_DeleteCharac21DeleteEventCharacFlagEP17SIG_DELETE_CHARAC>  ; DB_DeleteCharac::DeleteEventCharacFlag(SIG_DELETE_CHARAC*)
08402e6b +0x233:  mov    -0x14(%ebp),%eax
08402e6e +0x236:  movb   $0x1,0x10(%eax)
08402e72 +0x23a:  mov    -0x14(%ebp),%eax
08402e75 +0x23d:  mov    %eax,0x4(%esp)
08402e79 +0x241:  mov    0x8(%ebp),%eax
08402e7c +0x244:  mov    %eax,(%esp)
08402e7f +0x247:  call   0840340c <_ZN15DB_DeleteCharac12DeleteCharacEP17SIG_DELETE_CHARAC>  ; DB_DeleteCharac::DeleteCharac(SIG_DELETE_CHARAC*)
08402e84 +0x24c:  mov    %al,-0x15(%ebp)
08402e87 +0x24f:  movzbl -0x15(%ebp),%eax
08402e8b +0x253:  xor    $0x1,%eax
08402e8e +0x256:  test   %al,%al
08402e90 +0x258:  je     08402e9c <+0x264>
08402e92 +0x25a:  mov    -0x14(%ebp),%eax
08402e95 +0x25d:  movl   $0x1,0x8(%eax)
08402e9c +0x264:  mov    -0x14(%ebp),%eax
08402e9f +0x267:  mov    %eax,0x4(%esp)
08402ea3 +0x26b:  mov    0x8(%ebp),%eax
08402ea6 +0x26e:  mov    %eax,(%esp)
08402ea9 +0x271:  call   084035e0 <_ZN15DB_DeleteCharac18DeleteCharacOptionEP17SIG_DELETE_CHARAC>  ; DB_DeleteCharac::DeleteCharacOption(SIG_DELETE_CHARAC*)
08402eae +0x276:  mov    -0x14(%ebp),%eax
08402eb1 +0x279:  mov    %eax,0xc(%esp)
08402eb5 +0x27d:  mov    0x10(%ebp),%eax
08402eb8 +0x280:  mov    %eax,0x8(%esp)
08402ebc +0x284:  mov    0xc(%ebp),%eax
08402ebf +0x287:  mov    %eax,0x4(%esp)
08402ec3 +0x28b:  mov    0x8(%ebp),%eax
08402ec6 +0x28e:  mov    %eax,(%esp)
08402ec9 +0x291:  call   084034fe <_ZN15DB_DeleteCharac10SendResultEiiP17SIG_DELETE_CHARAC>  ; DB_DeleteCharac::SendResult(int, int, SIG_DELETE_CHARAC*)
08402ece +0x296:  mov    %al,-0x15(%ebp)
08402ed1 +0x299:  movzbl -0x15(%ebp),%eax
08402ed5 +0x29d:  xor    $0x1,%eax
08402ed8 +0x2a0:  test   %al,%al
08402eda +0x2a2:  je     08402ee3 <+0x2ab>
08402edc +0x2a4:  mov    $0x0,%eax
08402ee1 +0x2a9:  jmp    08402f42 <+0x30a>
08402ee3 +0x2ab:  mov    -0x14(%ebp),%eax
08402ee6 +0x2ae:  mov    0xc(%eax),%esi
08402ee9 +0x2b1:  mov    -0x14(%ebp),%eax
08402eec +0x2b4:  mov    0x4(%eax),%ebx
08402eef +0x2b7:  movl   $0x0,0xc(%esp)
08402ef7 +0x2bf:  movl   $0x12ce,0x8(%esp)
08402eff +0x2c7:  movl   $&_ZZN15DB_DeleteCharac8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
08402f07 +0x2cf:  lea    -0x28(%ebp),%eax
08402f0a +0x2d2:  mov    %eax,(%esp)
08402f0d +0x2d5:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08402f12 +0x2da:  mov    %esi,0x14(%esp)
08402f16 +0x2de:  mov    %ebx,0x10(%esp)
08402f1a +0x2e2:  movl   $0x12ce,0xc(%esp)
08402f22 +0x2ea:  movl   $&_ZZN15DB_DeleteCharac8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
08402f2a +0x2f2:  movl   $"[%s][%d] deLete charac(%d),guild_id(%d)",0x4(%esp)
08402f32 +0x2fa:  lea    -0x28(%ebp),%eax
08402f35 +0x2fd:  mov    %eax,(%esp)
08402f38 +0x300:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08402f3d +0x305:  mov    $0x1,%eax
08402f42 +0x30a:  add    $0x370,%esp
08402f48 +0x310:  pop    %ebx
08402f49 +0x311:  pop    %esi
08402f4a +0x312:  pop    %ebp
08402f4b +0x313:  ret
```

## 反编译 C

```c
// DB_DeleteCharac::dispatch @ 0x8402c38

/* DB_DeleteCharac::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_DeleteCharac::dispatch(DB_DeleteCharac *this,int param_1,int param_2,Stream *param_3)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;
  stItemLockInfo *this_00;
  int iVar4;
  stItemLockInfo local_35c [4];
  char acStack_358 [796];
  cMyTrace local_3c [16];
  cMyTrace local_2c [19];
  char local_19;
  SIG_DELETE_CHARAC *local_18;
  int local_14;
  int local_10;
  
  cVar2 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar2 == '\x01') {
    local_18 = Stream::GetOutBuffer<SIG_DELETE_CHARAC>(param_3);
    if (local_18 == (SIG_DELETE_CHARAC *)0x0) {
      uVar3 = 0;
    }
    else {
      *(undefined4 *)(local_18 + 8) = 0;
      local_14 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      this_00 = local_35c;
      for (iVar4 = 99; iVar4 != -1; iVar4 = iVar4 + -1) {
        stItemLockInfo::stItemLockInfo(this_00);
        this_00 = this_00 + 8;
      }
      iVar4 = DB_LoadInventory::GetItemLock(*(uint *)(local_18 + 4),local_35c);
      if (iVar4 == 0) {
        for (local_10 = 0; local_10 < 100; local_10 = local_10 + 1) {
          if ((acStack_358[local_10 * 8] == '\x01') ||
             ((acStack_358[local_10 * 8] == '\x02' &&
              (local_14 < *(int *)(acStack_358 + local_10 * 8 + -4) + 0x3f480)))) {
            *(undefined4 *)(local_18 + 8) = 3;
            cVar2 = SendResult(this,param_1,param_2,local_18);
            if (cVar2 != '\x01') {
              return 0;
            }
            return 1;
          }
        }
      }
      cVar2 = DeleteGuildInfo(this,local_18);
      if (cVar2 == '\x01') {
        local_18[0x10] = (SIG_DELETE_CHARAC)0x0;
        cVar2 = CheckEventCharacter40(this,local_18);
        if (cVar2 != '\0') {
          DeleteEventCharacFlag(this,local_18);
          local_18[0x10] = (SIG_DELETE_CHARAC)0x1;
        }
        local_19 = DeleteCharac(this,local_18);
        if (local_19 != '\x01') {
          *(undefined4 *)(local_18 + 8) = 1;
        }
        DeleteCharacOption(this,local_18);
        local_19 = SendResult(this,param_1,param_2,local_18);
        if (local_19 == '\x01') {
          uVar3 = *(undefined4 *)(local_18 + 0xc);
          uVar1 = *(undefined4 *)(local_18 + 4);
          cMyTrace::cMyTrace(local_2c,"virtual bool DB_DeleteCharac::dispatch(int, int, Stream*)",
                             0x12ce,0);
          cMyTrace::operator()
                    (local_2c,"[%s][%d] deLete charac(%d),guild_id(%d)",
                     "virtual bool DB_DeleteCharac::dispatch(int, int, Stream*)",0x12ce,uVar1,uVar3)
          ;
          uVar3 = 1;
        }
        else {
          uVar3 = 0;
        }
      }
      else {
        uVar3 = *(undefined4 *)(local_18 + 0xc);
        uVar1 = *(undefined4 *)(local_18 + 4);
        cMyTrace::cMyTrace((cMyTrace *)(acStack_358 + 0x31c),
                           "virtual bool DB_DeleteCharac::dispatch(int, int, Stream*)",0x12a7,0);
        cMyTrace::operator()
                  ((cMyTrace *)(acStack_358 + 0x31c),"[%s][%d] deLete charac(%d),guild_id(%d) FAIL",
                   "virtual bool DB_DeleteCharac::dispatch(int, int, Stream*)",0x12a7,uVar1,uVar3);
        cVar2 = SendResult(this,param_1,param_2,local_18);
        if (cVar2 == '\x01') {
          uVar3 = 1;
        }
        else {
          uVar3 = 0;
        }
      }
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
