# UpdateServerMessageByBroadcast

`_ZN27CSharedServerMessageManager30UpdateServerMessageByBroadcastEiPcS0_i`

`CSharedServerMessageManager::UpdateServerMessageByBroadcast(int, char*, char*, int)`

| 类 | 地址 |
|---|---|
| `CSharedServerMessageManager` | `0x08601476` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08601476  _ZN27CSharedServerMessageManager30UpdateServerMessageByBroadcastEiPcS0_i
#           CSharedServerMessageManager::UpdateServerMessageByBroadcast(int, char*, char*, int)
# range [0x08601476, 0x0860163f]
08601476 +0x000:  push   %ebp
08601477 +0x001:  mov    %esp,%ebp
08601479 +0x003:  sub    $0x88,%esp
0860147f +0x009:  mov    0xc(%ebp),%eax
08601482 +0x00c:  mov    %eax,0x4(%esp)
08601486 +0x010:  mov    0x8(%ebp),%eax
08601489 +0x013:  mov    %eax,(%esp)
0860148c +0x016:  call   08600c34 <_ZN27CSharedServerMessageManager13getCurMessageEi>  ; CSharedServerMessageManager::getCurMessage(int)
08601491 +0x01b:  mov    %eax,-0x10(%ebp)
08601494 +0x01e:  cmpl   $0x0,-0x10(%ebp)
08601498 +0x022:  jne    086015ae <+0x138>
0860149e +0x028:  mov    0x8(%ebp),%eax
086014a1 +0x02b:  mov    0xc(%ebp),%edx
086014a4 +0x02e:  mov    %edx,0x4(%esp)
086014a8 +0x032:  mov    %eax,(%esp)
086014ab +0x035:  call   08601700 <_ZN27CSharedServerMessageManager27CSharedServerMessageAdapter9IsOnIndexEi>  ; CSharedServerMessageManager::CSharedServerMessageAdapter::IsOnIndex(int)
086014b0 +0x03a:  test   %al,%al
086014b2 +0x03c:  je     08601573 <+0xfd>
086014b8 +0x042:  mov    0x8(%ebp),%eax
086014bb +0x045:  mov    0xc(%ebp),%edx
086014be +0x048:  mov    %edx,0x4(%esp)
086014c2 +0x04c:  mov    %eax,(%esp)
086014c5 +0x04f:  call   08601794 <_ZN27CSharedServerMessageManager27CSharedServerMessageAdapter21GetShareKindWithIndexEi>  ; CSharedServerMessageManager::CSharedServerMessageAdapter::GetShareKindWithIndex(int)
086014ca +0x054:  mov    %eax,-0xc(%ebp)
086014cd +0x057:  cmpl   $0xffffffff,-0xc(%ebp)
086014d1 +0x05b:  je     0860163c <+0x1c6>
086014d7 +0x061:  mov    -0xc(%ebp),%eax
086014da +0x064:  mov    %al,-0x78(%ebp)
086014dd +0x067:  mov    0xc(%ebp),%eax
086014e0 +0x06a:  mov    %al,-0x77(%ebp)
086014e3 +0x06d:  mov    0x14(%ebp),%eax
086014e6 +0x070:  mov    %eax,(%esp)
086014e9 +0x073:  call   0807e3b0 <_init+0xca8>
086014ee +0x078:  mov    %eax,-0x3c(%ebp)
086014f1 +0x07b:  mov    -0x3c(%ebp),%eax
086014f4 +0x07e:  add    $0x1,%eax
086014f7 +0x081:  mov    %eax,0x8(%esp)
086014fb +0x085:  mov    0x14(%ebp),%eax
086014fe +0x088:  mov    %eax,0x4(%esp)
08601502 +0x08c:  lea    -0x78(%ebp),%eax
08601505 +0x08f:  add    $0x40,%eax
08601508 +0x092:  mov    %eax,(%esp)
0860150b +0x095:  call   0807d8d0 <_init+0x1c8>
08601510 +0x09a:  mov    0x10(%ebp),%eax
08601513 +0x09d:  mov    %eax,(%esp)
08601516 +0x0a0:  call   0807e3b0 <_init+0xca8>
0860151b +0x0a5:  mov    %eax,-0x74(%ebp)
0860151e +0x0a8:  mov    -0x74(%ebp),%eax
08601521 +0x0ab:  add    $0x1,%eax
08601524 +0x0ae:  mov    %eax,0x8(%esp)
08601528 +0x0b2:  mov    0x10(%ebp),%eax
0860152b +0x0b5:  mov    %eax,0x4(%esp)
0860152f +0x0b9:  lea    -0x78(%ebp),%eax
08601532 +0x0bc:  add    $0x8,%eax
08601535 +0x0bf:  mov    %eax,(%esp)
08601538 +0x0c2:  call   0807d8d0 <_init+0x1c8>
0860153d +0x0c7:  mov    0x18(%ebp),%eax
08601540 +0x0ca:  mov    %eax,-0x24(%ebp)
08601543 +0x0cd:  mov    0x8(%ebp),%eax
08601546 +0x0d0:  lea    0xc(%eax),%edx
08601549 +0x0d3:  lea    -0x78(%ebp),%eax
0860154c +0x0d6:  mov    %eax,0x4(%esp)
08601550 +0x0da:  mov    %edx,(%esp)
08601553 +0x0dd:  call   08601ad4 <_GLOBAL__I__ZN27CSharedServerMessageManagerC2Ev+0x120>  ; global constructors keyed to CSharedServerMessageManager::CSharedServerMessageManager()+0x120
08601558 +0x0e2:  mov    0x8(%ebp),%eax
0860155b +0x0e5:  movzbl 0x8(%eax),%eax
0860155f +0x0e9:  lea    0x1(%eax),%edx
08601562 +0x0ec:  mov    0x8(%ebp),%eax
08601565 +0x0ef:  mov    %dl,0x8(%eax)
08601568 +0x0f2:  lea    -0x78(%ebp),%eax
0860156b +0x0f5:  mov    %eax,-0x10(%ebp)
0860156e +0x0f8:  jmp    0860161d <+0x1a7>
08601573 +0x0fd:  movl   $0x0,0xc(%esp)
0860157b +0x105:  movl   $0x1c6,0x8(%esp)
08601583 +0x10d:  movl   $&_ZZN27CSharedServerMessageManager30UpdateServerMessageByBroadcastEiPcS0_iE19__PRETTY_FUNCTION__,0x4(%esp)
0860158b +0x115:  lea    -0x20(%ebp),%eax
0860158e +0x118:  mov    %eax,(%esp)
08601591 +0x11b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08601596 +0x120:  movl   $"SERVER_MESSAGE : NOT EXIST INDEX and NOT EXIST DATA",0x4(%esp)
0860159e +0x128:  lea    -0x20(%ebp),%eax
086015a1 +0x12b:  mov    %eax,(%esp)
086015a4 +0x12e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086015a9 +0x133:  jmp    0860163d <+0x1c7>
086015ae +0x138:  mov    0x10(%ebp),%eax
086015b1 +0x13b:  mov    %eax,(%esp)
086015b4 +0x13e:  call   0807e3b0 <_init+0xca8>
086015b9 +0x143:  mov    -0x10(%ebp),%edx
086015bc +0x146:  mov    %eax,0x4(%edx)
086015bf +0x149:  mov    -0x10(%ebp),%eax
086015c2 +0x14c:  mov    0x4(%eax),%eax
086015c5 +0x14f:  add    $0x1,%eax
086015c8 +0x152:  mov    -0x10(%ebp),%edx
086015cb +0x155:  add    $0x8,%edx
086015ce +0x158:  mov    %eax,0x8(%esp)
086015d2 +0x15c:  mov    0x10(%ebp),%eax
086015d5 +0x15f:  mov    %eax,0x4(%esp)
086015d9 +0x163:  mov    %edx,(%esp)
086015dc +0x166:  call   0807d8d0 <_init+0x1c8>
086015e1 +0x16b:  mov    0x14(%ebp),%eax
086015e4 +0x16e:  mov    %eax,(%esp)
086015e7 +0x171:  call   0807e3b0 <_init+0xca8>
086015ec +0x176:  mov    -0x10(%ebp),%edx
086015ef +0x179:  mov    %eax,0x3c(%edx)
086015f2 +0x17c:  mov    -0x10(%ebp),%eax
086015f5 +0x17f:  mov    0x3c(%eax),%eax
086015f8 +0x182:  add    $0x1,%eax
086015fb +0x185:  mov    -0x10(%ebp),%edx
086015fe +0x188:  add    $0x40,%edx
08601601 +0x18b:  mov    %eax,0x8(%esp)
08601605 +0x18f:  mov    0x14(%ebp),%eax
08601608 +0x192:  mov    %eax,0x4(%esp)
0860160c +0x196:  mov    %edx,(%esp)
0860160f +0x199:  call   0807d8d0 <_init+0x1c8>
08601614 +0x19e:  mov    -0x10(%ebp),%eax
08601617 +0x1a1:  mov    0x18(%ebp),%edx
0860161a +0x1a4:  mov    %edx,0x54(%eax)
0860161d +0x1a7:  mov    0x8(%ebp),%eax
08601620 +0x1aa:  mov    %eax,(%esp)
08601623 +0x1ad:  call   084ed182 <_GLOBAL__I__Z7getUserj+0x4134>  ; global constructors keyed to getUser(unsigned int)+0x4134
08601628 +0x1b2:  xor    $0x1,%eax
0860162b +0x1b5:  test   %al,%al
0860162d +0x1b7:  je     0860163d <+0x1c7>
0860162f +0x1b9:  mov    0x8(%ebp),%eax
08601632 +0x1bc:  mov    %eax,(%esp)
08601635 +0x1bf:  call   08601a0e <_GLOBAL__I__ZN27CSharedServerMessageManagerC2Ev+0x5a>  ; global constructors keyed to CSharedServerMessageManager::CSharedServerMessageManager()+0x5a
0860163a +0x1c4:  jmp    0860163d <+0x1c7>
0860163c +0x1c6:  nop
0860163d +0x1c7:  leave
0860163e +0x1c8:  ret
0860163f +0x1c9:  nop
```

## 反编译 C

```c
// CSharedServerMessageManager::UpdateServerMessageByBroadcast @ 0x8601476

/* CSharedServerMessageManager::UpdateServerMessageByBroadcast(int, char*, char*, int) */

void __thiscall
CSharedServerMessageManager::UpdateServerMessageByBroadcast
          (CSharedServerMessageManager *this,int param_1,char *param_2,char *param_3,int param_4)

{
  char cVar1;
  size_t sVar2;
  stSERVER_MESSAGE local_7c;
  undefined1 local_7b;
  size_t local_78;
  char acStack_74 [52];
  size_t local_40;
  char acStack_3c [20];
  int local_28;
  cMyTrace local_24 [16];
  stSERVER_MESSAGE *local_14;
  int local_10;
  
  local_14 = (stSERVER_MESSAGE *)getCurMessage(this,param_1);
  if (local_14 == (stSERVER_MESSAGE *)0x0) {
    cVar1 = CSharedServerMessageAdapter::IsOnIndex((CSharedServerMessageAdapter *)this,param_1);
    if (cVar1 == '\0') {
      cMyTrace::cMyTrace(local_24,
                         "void CSharedServerMessageManager::UpdateServerMessageByBroadcast(int, char*, char*, int)"
                         ,0x1c6,0);
      cMyTrace::operator()(local_24,"SERVER_MESSAGE : NOT EXIST INDEX and NOT EXIST DATA");
      return;
    }
    local_10 = CSharedServerMessageAdapter::GetShareKindWithIndex
                         ((CSharedServerMessageAdapter *)this,param_1);
    if (local_10 == -1) {
      return;
    }
    local_7c = SUB41(local_10,0);
    local_7b = (undefined1)param_1;
    local_40 = strlen(param_3);
    strncpy(acStack_3c,param_3,local_40 + 1);
    local_78 = strlen(param_2);
    strncpy(acStack_74,param_2,local_78 + 1);
    local_28 = param_4;
    std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>::push_back
              ((vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>> *)(this + 0xc),&local_7c);
    this[8] = (CSharedServerMessageManager)((char)this[8] + '\x01');
    local_14 = &local_7c;
  }
  else {
    sVar2 = strlen(param_2);
    *(size_t *)(local_14 + 4) = sVar2;
    strncpy((char *)(local_14 + 8),param_2,*(int *)(local_14 + 4) + 1);
    sVar2 = strlen(param_3);
    *(size_t *)(local_14 + 0x3c) = sVar2;
    strncpy((char *)(local_14 + 0x40),param_3,*(int *)(local_14 + 0x3c) + 1);
    *(int *)(local_14 + 0x54) = param_4;
  }
  cVar1 = IsSetServerMessage(this);
  if (cVar1 != '\x01') {
    setLoadingComplete(this);
  }
  return;
}
```
