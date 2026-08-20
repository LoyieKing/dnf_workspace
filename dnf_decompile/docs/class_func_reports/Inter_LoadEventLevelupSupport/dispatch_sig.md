# dispatch_sig

`_ZN29Inter_LoadEventLevelupSupport12dispatch_sigEP5CUserPci`

`Inter_LoadEventLevelupSupport::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_LoadEventLevelupSupport` | `0x084e8ce4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e8ce4  _ZN29Inter_LoadEventLevelupSupport12dispatch_sigEP5CUserPci
#           Inter_LoadEventLevelupSupport::dispatch_sig(CUser*, char*, int)
# range [0x084e8ce4, 0x084e8f67]
084e8ce4 +0x000:  push   %ebp
084e8ce5 +0x001:  mov    %esp,%ebp
084e8ce7 +0x003:  push   %edi
084e8ce8 +0x004:  push   %esi
084e8ce9 +0x005:  push   %ebx
084e8cea +0x006:  sub    $0x4c,%esp
084e8ced +0x009:  cmpl   $0x0,0xc(%ebp)
084e8cf1 +0x00d:  je     084e8cf9 <+0x15>
084e8cf3 +0x00f:  cmpl   $0x0,0x10(%ebp)
084e8cf7 +0x013:  jne    084e8d41 <+0x5d>
084e8cf9 +0x015:  movl   $0x5,0xc(%esp)
084e8d01 +0x01d:  movl   $0x6dee,0x8(%esp)
084e8d09 +0x025:  movl   $&_ZZN29Inter_LoadEventLevelupSupport12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084e8d11 +0x02d:  lea    -0x38(%ebp),%eax
084e8d14 +0x030:  mov    %eax,(%esp)
084e8d17 +0x033:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084e8d1c +0x038:  movl   $&_ZZN29Inter_LoadEventLevelupSupport12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084e8d24 +0x040:  movl   $"[%s] pUser or p is null.",0x4(%esp)
084e8d2c +0x048:  lea    -0x38(%ebp),%eax
084e8d2f +0x04b:  mov    %eax,(%esp)
084e8d32 +0x04e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084e8d37 +0x053:  mov    $0x6def,%eax
084e8d3c +0x058:  jmp    084e8f60 <+0x27c>
084e8d41 +0x05d:  mov    0x10(%ebp),%eax
084e8d44 +0x060:  mov    %eax,-0x28(%ebp)
084e8d47 +0x063:  mov    0xc(%ebp),%eax
084e8d4a +0x066:  add    $0x8d0e4,%eax
084e8d4f +0x06b:  mov    %eax,(%esp)
084e8d52 +0x06e:  call   08147be2 <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0xd5>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0xd5
084e8d57 +0x073:  call   08147d68 <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x25b>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x25b
084e8d5c +0x078:  mov    %eax,(%esp)
084e8d5f +0x07b:  call   08147012 <_ZNK25LevelupSupportEventManger19GetDefaultEventInfoEv>  ; LevelupSupportEventManger::GetDefaultEventInfo() const
084e8d64 +0x080:  mov    0xc(%ebp),%edx
084e8d67 +0x083:  add    $0x8d0e4,%edx
084e8d6d +0x089:  mov    %eax,0x4(%esp)
084e8d71 +0x08d:  mov    %edx,(%esp)
084e8d74 +0x090:  call   084f16ae <_GLOBAL__I__Z7getUserj+0x8660>  ; global constructors keyed to getUser(unsigned int)+0x8660
084e8d79 +0x095:  movl   $0x0,-0x24(%ebp)
084e8d80 +0x09c:  jmp    084e8dd6 <+0xf2>
084e8d82 +0x09e:  mov    0xc(%ebp),%eax
084e8d85 +0x0a1:  lea    0x8d0e4(%eax),%edx
084e8d8b +0x0a7:  mov    -0x24(%ebp),%eax
084e8d8e +0x0aa:  mov    %eax,0x4(%esp)
084e8d92 +0x0ae:  mov    %edx,(%esp)
084e8d95 +0x0b1:  call   08147d16 <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x209>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x209
084e8d9a +0x0b6:  movzwl (%eax),%eax
084e8d9d +0x0b9:  movzwl %ax,%ebx
084e8da0 +0x0bc:  mov    0xc(%ebp),%eax
084e8da3 +0x0bf:  mov    %eax,(%esp)
084e8da6 +0x0c2:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
084e8dab +0x0c7:  cmp    %eax,%ebx
084e8dad +0x0c9:  setle  %al
084e8db0 +0x0cc:  test   %al,%al
084e8db2 +0x0ce:  je     084e8dd2 <+0xee>
084e8db4 +0x0d0:  mov    0xc(%ebp),%eax
084e8db7 +0x0d3:  lea    0x8d0e4(%eax),%edx
084e8dbd +0x0d9:  mov    -0x24(%ebp),%eax
084e8dc0 +0x0dc:  mov    %eax,0x4(%esp)
084e8dc4 +0x0e0:  mov    %edx,(%esp)
084e8dc7 +0x0e3:  call   08147d16 <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x209>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x209
084e8dcc +0x0e8:  movw   $0x1,0x2(%eax)
084e8dd2 +0x0ee:  addl   $0x1,-0x24(%ebp)
084e8dd6 +0x0f2:  mov    0xc(%ebp),%eax
084e8dd9 +0x0f5:  add    $0x8d0e4,%eax
084e8dde +0x0fa:  mov    %eax,(%esp)
084e8de1 +0x0fd:  call   08147cfa <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x1ed>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x1ed
084e8de6 +0x102:  cmp    -0x24(%ebp),%eax
084e8de9 +0x105:  seta   %al
084e8dec +0x108:  test   %al,%al
084e8dee +0x10a:  jne    084e8d82 <+0x9e>
084e8df0 +0x10c:  movl   $0x0,-0x20(%ebp)
084e8df7 +0x113:  jmp    084e8e94 <+0x1b0>
084e8dfc +0x118:  mov    -0x20(%ebp),%eax
084e8dff +0x11b:  mov    0xc(%ebp),%edx
084e8e02 +0x11e:  add    $0x8d0e4,%edx
084e8e08 +0x124:  mov    %eax,0x4(%esp)
084e8e0c +0x128:  mov    %edx,(%esp)
084e8e0f +0x12b:  call   08147d16 <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x209>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x209
084e8e14 +0x130:  movzwl (%eax),%ecx
084e8e17 +0x133:  mov    -0x20(%ebp),%edx
084e8e1a +0x136:  mov    -0x28(%ebp),%eax
084e8e1d +0x139:  movzwl 0x4(%eax,%edx,4),%eax
084e8e22 +0x13e:  cmp    %ax,%cx
084e8e25 +0x141:  sete   %al
084e8e28 +0x144:  test   %al,%al
084e8e2a +0x146:  je     084e8e55 <+0x171>
084e8e2c +0x148:  mov    -0x20(%ebp),%eax
084e8e2f +0x14b:  mov    0xc(%ebp),%edx
084e8e32 +0x14e:  add    $0x8d0e4,%edx
084e8e38 +0x154:  mov    %eax,0x4(%esp)
084e8e3c +0x158:  mov    %edx,(%esp)
084e8e3f +0x15b:  call   08147d16 <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x209>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x209
084e8e44 +0x160:  mov    -0x20(%ebp),%ecx
084e8e47 +0x163:  mov    -0x28(%ebp),%edx
084e8e4a +0x166:  movzwl 0x6(%edx,%ecx,4),%edx
084e8e4f +0x16b:  mov    %dx,0x2(%eax)
084e8e53 +0x16f:  jmp    084e8e90 <+0x1ac>
084e8e55 +0x171:  mov    0xc(%ebp),%eax
084e8e58 +0x174:  mov    %eax,(%esp)
084e8e5b +0x177:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084e8e60 +0x17c:  mov    %eax,0x14(%esp)
084e8e64 +0x180:  movl   $"Inter_LoadEventLevelupSupport diff state charac_no:%d",0x10(%esp)
084e8e6c +0x188:  movl   $0x6e06,0xc(%esp)
084e8e74 +0x190:  movl   $&_ZZN29Inter_LoadEventLevelupSupport12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084e8e7c +0x198:  movl   $"InterDispatcher.cpp",0x4(%esp)
084e8e84 +0x1a0:  movl   $0x1,(%esp)
084e8e8b +0x1a7:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084e8e90 +0x1ac:  addl   $0x1,-0x20(%ebp)
084e8e94 +0x1b0:  mov    -0x28(%ebp),%eax
084e8e97 +0x1b3:  mov    (%eax),%eax
084e8e99 +0x1b5:  cmp    -0x20(%ebp),%eax
084e8e9c +0x1b8:  setg   %al
084e8e9f +0x1bb:  test   %al,%al
084e8ea1 +0x1bd:  jne    084e8dfc <+0x118>
084e8ea7 +0x1c3:  mov    -0x28(%ebp),%eax
084e8eaa +0x1c6:  mov    (%eax),%eax
084e8eac +0x1c8:  test   %eax,%eax
084e8eae +0x1ca:  jne    084e8f48 <+0x264>
084e8eb4 +0x1d0:  movl   $0x0,-0x1c(%ebp)
084e8ebb +0x1d7:  jmp    084e8f2a <+0x246>
084e8ebd +0x1d9:  mov    0xc(%ebp),%eax
084e8ec0 +0x1dc:  lea    0x8d0e4(%eax),%edx
084e8ec6 +0x1e2:  mov    -0x1c(%ebp),%eax
084e8ec9 +0x1e5:  mov    %eax,0x4(%esp)
084e8ecd +0x1e9:  mov    %edx,(%esp)
084e8ed0 +0x1ec:  call   08147d16 <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x209>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x209
084e8ed5 +0x1f1:  movzwl 0x2(%eax),%eax
084e8ed9 +0x1f5:  movzwl %ax,%edi
084e8edc +0x1f8:  mov    0xc(%ebp),%eax
084e8edf +0x1fb:  lea    0x8d0e4(%eax),%edx
084e8ee5 +0x201:  mov    -0x1c(%ebp),%eax
084e8ee8 +0x204:  mov    %eax,0x4(%esp)
084e8eec +0x208:  mov    %edx,(%esp)
084e8eef +0x20b:  call   08147d16 <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x209>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x209
084e8ef4 +0x210:  movzwl (%eax),%eax
084e8ef7 +0x213:  movzwl %ax,%esi
084e8efa +0x216:  mov    0xc(%ebp),%eax
084e8efd +0x219:  mov    %eax,(%esp)
084e8f00 +0x21c:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084e8f05 +0x221:  mov    %eax,%ebx
084e8f07 +0x223:  mov    0xc(%ebp),%eax
084e8f0a +0x226:  mov    %eax,(%esp)
084e8f0d +0x229:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
084e8f12 +0x22e:  mov    %edi,0xc(%esp)
084e8f16 +0x232:  mov    %esi,0x8(%esp)
084e8f1a +0x236:  mov    %ebx,0x4(%esp)
084e8f1e +0x23a:  mov    %eax,(%esp)
084e8f21 +0x23d:  call   0844cc2e <_ZN26DB_SaveEventLevelupSupport11makeRequestEiiii>  ; DB_SaveEventLevelupSupport::makeRequest(int, int, int, int)
084e8f26 +0x242:  addl   $0x1,-0x1c(%ebp)
084e8f2a +0x246:  mov    0xc(%ebp),%eax
084e8f2d +0x249:  add    $0x8d0e4,%eax
084e8f32 +0x24e:  mov    %eax,(%esp)
084e8f35 +0x251:  call   08147cfa <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x1ed>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x1ed
084e8f3a +0x256:  cmp    -0x1c(%ebp),%eax
084e8f3d +0x259:  seta   %al
084e8f40 +0x25c:  test   %al,%al
084e8f42 +0x25e:  jne    084e8ebd <+0x1d9>
084e8f48 +0x264:  movl   $0x0,0x4(%esp)
084e8f50 +0x26c:  mov    0xc(%ebp),%eax
084e8f53 +0x26f:  mov    %eax,(%esp)
084e8f56 +0x272:  call   0814701e <_ZN25LevelupSupportEventManger15SendCharacStateEP5CUseri>  ; LevelupSupportEventManger::SendCharacState(CUser*, int)
084e8f5b +0x277:  mov    $0x0,%eax
084e8f60 +0x27c:  add    $0x4c,%esp
084e8f63 +0x27f:  pop    %ebx
084e8f64 +0x280:  pop    %esi
084e8f65 +0x281:  pop    %edi
084e8f66 +0x282:  pop    %ebp
084e8f67 +0x283:  ret
```

## 反编译 C

```c
// Inter_LoadEventLevelupSupport::dispatch_sig @ 0x84e8ce4

/* Inter_LoadEventLevelupSupport::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadEventLevelupSupport::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  LevelupSupportEventManger *this;
  vector *pvVar4;
  uint uVar5;
  short *psVar6;
  int iVar7;
  ushort *puVar8;
  int iVar9;
  cMyTrace local_3c [16];
  int *local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  
  if ((param_2 == (char *)0x0) || (param_3 == 0)) {
    cMyTrace::cMyTrace(local_3c,
                       "virtual int Inter_LoadEventLevelupSupport::dispatch_sig(CUser*, char*, int)"
                       ,0x6dee,5);
    cMyTrace::operator()
              (local_3c,"[%s] pUser or p is null.",
               "virtual int Inter_LoadEventLevelupSupport::dispatch_sig(CUser*, char*, int)");
    uVar3 = 0x6def;
  }
  else {
    local_2c = (int *)param_3;
    std::
    vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
    ::clear((vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
             *)(param_2 + 0x8d0e4));
    this = (LevelupSupportEventManger *)ARAD::Singleton<LevelupSupportEventManger>::Get();
    pvVar4 = (vector *)LevelupSupportEventManger::GetDefaultEventInfo(this);
    std::
    vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
    ::operator=((vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                 *)(param_2 + 0x8d0e4),pvVar4);
    local_28 = 0;
    while( true ) {
      uVar5 = std::
              vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
              ::size((vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                      *)(param_2 + 0x8d0e4));
      if (uVar5 <= local_28) break;
      puVar8 = (ushort *)
               std::
               vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
               ::operator[]((vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                             *)(param_2 + 0x8d0e4),local_28);
      uVar1 = *puVar8;
      iVar7 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_2);
      if ((int)(uint)uVar1 <= iVar7) {
        iVar7 = std::
                vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                ::operator[]((vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                              *)(param_2 + 0x8d0e4),local_28);
        *(undefined2 *)(iVar7 + 2) = 1;
      }
      local_28 = local_28 + 1;
    }
    for (local_24 = 0; (int)local_24 < *local_2c; local_24 = local_24 + 1) {
      psVar6 = (short *)std::
                        vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                        ::operator[]((vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                                      *)(param_2 + 0x8d0e4),local_24);
      if (*psVar6 == (short)local_2c[local_24 + 1]) {
        iVar7 = std::
                vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                ::operator[]((vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                              *)(param_2 + 0x8d0e4),local_24);
        *(undefined2 *)(iVar7 + 2) = *(undefined2 *)((int)local_2c + local_24 * 4 + 6);
      }
      else {
        uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
        LogManager::logFormat
                  (1,"InterDispatcher.cpp",
                   "virtual int Inter_LoadEventLevelupSupport::dispatch_sig(CUser*, char*, int)",
                   0x6e06,"Inter_LoadEventLevelupSupport diff state charac_no:%d",uVar3);
      }
    }
    if (*local_2c == 0) {
      local_20 = 0;
      while( true ) {
        uVar5 = std::
                vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                ::size((vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                        *)(param_2 + 0x8d0e4));
        if (uVar5 <= local_20) break;
        iVar7 = std::
                vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                ::operator[]((vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                              *)(param_2 + 0x8d0e4),local_20);
        uVar1 = *(ushort *)(iVar7 + 2);
        puVar8 = (ushort *)
                 std::
                 vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                 ::operator[]((vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                               *)(param_2 + 0x8d0e4),local_20);
        uVar2 = *puVar8;
        iVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
        iVar9 = CUser::GetUID((CUser *)param_2);
        DB_SaveEventLevelupSupport::makeRequest(iVar9,iVar7,(uint)uVar2,(uint)uVar1);
        local_20 = local_20 + 1;
      }
    }
    LevelupSupportEventManger::SendCharacState((CUser *)param_2,0);
    uVar3 = 0;
  }
  return uVar3;
}
```
