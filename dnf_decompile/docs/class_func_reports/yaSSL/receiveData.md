# receiveData

`_ZN5yaSSL11receiveDataERNS_3SSLERNS_4DataEb`

`yaSSL::receiveData(yaSSL::SSL&, yaSSL::Data&, bool)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x0879e420` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0879e420  _ZN5yaSSL11receiveDataERNS_3SSLERNS_4DataEb
#           yaSSL::receiveData(yaSSL::SSL&, yaSSL::Data&, bool)
# range [0x0879e420, 0x0879e569]
0879e420 +0x000:  push   %ebp
0879e421 +0x001:  mov    %esp,%ebp
0879e423 +0x003:  sub    $0x38,%esp
0879e426 +0x006:  mov    %ebx,-0xc(%ebp)
0879e429 +0x009:  movzbl 0x10(%ebp),%eax
0879e42d +0x00d:  call   08722df8 <__i686.get_pc_thunk.bx>
0879e432 +0x012:  add    $0xbce766,%ebx
0879e438 +0x018:  mov    %esi,-0x8(%ebp)
0879e43b +0x01b:  mov    0x8(%ebp),%esi
0879e43e +0x01e:  mov    %edi,-0x4(%ebp)
0879e441 +0x021:  mov    0xc(%ebp),%edi
0879e444 +0x024:  mov    %al,-0x1a(%ebp)
0879e447 +0x027:  mov    %esi,(%esp)
0879e44a +0x02a:  call   0874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>  ; yaSSL::SSL::GetError() const
0879e44f +0x02f:  cmp    $0x50,%eax
0879e452 +0x032:  je     0879e480 <+0x60>
0879e454 +0x034:  mov    %esi,(%esp)
0879e457 +0x037:  call   0874e0e0 <_ZN5yaSSL3SSL23verfiyHandShakeCompleteEv>  ; yaSSL::SSL::verfiyHandShakeComplete()
0879e45c +0x03c:  mov    %esi,(%esp)
0879e45f +0x03f:  call   0874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>  ; yaSSL::SSL::GetError() const
0879e464 +0x044:  test   %eax,%eax
0879e466 +0x046:  je     0879e498 <+0x78>
0879e468 +0x048:  mov    $0xffffffff,%eax
0879e46d +0x04d:  mov    -0xc(%ebp),%ebx
0879e470 +0x050:  mov    -0x8(%ebp),%esi
0879e473 +0x053:  mov    -0x4(%ebp),%edi
0879e476 +0x056:  mov    %ebp,%esp
0879e478 +0x058:  pop    %ebp
0879e479 +0x059:  ret
0879e47a +0x05a:  lea    0x0(%esi),%esi
0879e480 +0x060:  movl   $0x0,0x4(%esp)
0879e488 +0x068:  mov    %esi,(%esp)
0879e48b +0x06b:  call   0874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>  ; yaSSL::SSL::SetError(yaSSL::YasslError)
0879e490 +0x070:  jmp    0879e454 <+0x34>
0879e492 +0x072:  lea    0x0(%esi),%esi
0879e498 +0x078:  mov    %esi,(%esp)
0879e49b +0x07b:  call   0874e310 <_ZNK5yaSSL3SSL7HasDataEv>  ; yaSSL::SSL::HasData() const
0879e4a0 +0x080:  test   %al,%al
0879e4a2 +0x082:  je     0879e528 <+0x108>
0879e4a8 +0x088:  cmpb   $0x0,-0x1a(%ebp)
0879e4ac +0x08c:  je     0879e51a <+0xfa>
0879e4ae +0x08e:  mov    %edi,0x4(%esp)
0879e4b2 +0x092:  mov    %esi,(%esp)
0879e4b5 +0x095:  call   0874fa70 <_ZN5yaSSL3SSL8PeekDataERNS_4DataE>  ; yaSSL::SSL::PeekData(yaSSL::Data&)
0879e4ba +0x09a:  mov    (%edi),%eax
0879e4bc +0x09c:  mov    %edi,(%esp)
0879e4bf +0x09f:  call   *0x10(%eax)
0879e4c2 +0x0a2:  mov    %esi,(%esp)
0879e4c5 +0x0a5:  mov    %ax,-0x1a(%ebp)
0879e4c9 +0x0a9:  call   0874e300 <_ZN5yaSSL3SSL6useLogEv>  ; yaSSL::SSL::useLog()
0879e4ce +0x0ae:  movzwl -0x1a(%ebp),%edx
0879e4d2 +0x0b2:  movl   $0x0,0x8(%esp)
0879e4da +0x0ba:  mov    %edx,0x4(%esp)
0879e4de +0x0be:  mov    %eax,(%esp)
0879e4e1 +0x0c1:  call   087a1480 <_ZN5yaSSL3Log8ShowDataEjb>  ; yaSSL::Log::ShowData(unsigned int, bool)
0879e4e6 +0x0c6:  mov    %esi,(%esp)
0879e4e9 +0x0c9:  call   0874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>  ; yaSSL::SSL::GetError() const
0879e4ee +0x0ce:  mov    %eax,%edx
0879e4f0 +0x0d0:  mov    $0xffffffff,%eax
0879e4f5 +0x0d5:  test   %edx,%edx
0879e4f7 +0x0d7:  jne    0879e46d <+0x4d>
0879e4fd +0x0dd:  mov    (%edi),%eax
0879e4ff +0x0df:  mov    %edi,(%esp)
0879e502 +0x0e2:  call   *0x10(%eax)
0879e505 +0x0e5:  test   %ax,%ax
0879e508 +0x0e8:  je     0879e535 <+0x115>
0879e50a +0x0ea:  mov    (%edi),%eax
0879e50c +0x0ec:  mov    %edi,(%esp)
0879e50f +0x0ef:  call   *0x10(%eax)
0879e512 +0x0f2:  movzwl %ax,%eax
0879e515 +0x0f5:  jmp    0879e46d <+0x4d>
0879e51a +0x0fa:  mov    %edi,0x4(%esp)
0879e51e +0x0fe:  mov    %esi,(%esp)
0879e521 +0x101:  call   08750a30 <_ZN5yaSSL3SSL8fillDataERNS_4DataE>  ; yaSSL::SSL::fillData(yaSSL::Data&)
0879e526 +0x106:  jmp    0879e4ba <+0x9a>
0879e528 +0x108:  mov    %esi,(%esp)
0879e52b +0x10b:  call   0879e390 <_ZN5yaSSL12processReplyERNS_3SSLE>  ; yaSSL::processReply(yaSSL::SSL&)
0879e530 +0x110:  jmp    0879e4a8 <+0x88>
0879e535 +0x115:  mov    %esi,(%esp)
0879e538 +0x118:  call   0874e0a0 <_ZNK5yaSSL3SSL9getSocketEv>  ; yaSSL::SSL::getSocket() const
0879e53d +0x11d:  mov    %eax,(%esp)
0879e540 +0x120:  call   087a14f0 <_ZNK5yaSSL6Socket10WouldBlockEv>  ; yaSSL::Socket::WouldBlock() const
0879e545 +0x125:  test   %al,%al
0879e547 +0x127:  je     0879e50a <+0xea>
0879e549 +0x129:  movl   $0x50,0x4(%esp)
0879e551 +0x131:  mov    %esi,(%esp)
0879e554 +0x134:  call   0874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>  ; yaSSL::SSL::SetError(yaSSL::YasslError)
0879e559 +0x139:  mov    $0xfffffff8,%eax
0879e55e +0x13e:  jmp    0879e46d <+0x4d>
0879e563 +0x143:  lea    0x0(%esi),%esi
0879e569 +0x149:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::receiveData @ 0x879e420

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::receiveData(yaSSL::SSL&, yaSSL::Data&, bool) */

uint yaSSL::receiveData(SSL *param_1,Data *param_2,bool param_3)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  Socket *this;
  uint uVar6;
  undefined4 uVar7;
  
  iVar4 = SSL::GetError(param_1);
  if (iVar4 == 0x50) {
    SSL::SetError(param_1,0);
  }
  SSL::verfiyHandShakeComplete(param_1);
  iVar4 = SSL::GetError(param_1);
  if (iVar4 == 0) {
    cVar1 = SSL::HasData(param_1);
    if (cVar1 == '\0') {
      processReply(param_1);
    }
    if (param_3) {
      SSL::PeekData(param_1,param_2);
    }
    else {
      SSL::fillData(param_1,param_2);
    }
    uVar2 = (**(code **)(*(int *)param_2 + 0x10))(param_2);
    uVar5 = SSL::useLog(param_1);
    uVar6 = (uint)uVar2;
    uVar7 = 0;
    Log::ShowData(uVar5,SUB21(uVar2,0));
    iVar4 = SSL::GetError(param_1);
    uVar5 = 0xffffffff;
    if (iVar4 == 0) {
      sVar3 = (**(code **)(*(int *)param_2 + 0x10))(param_2,uVar6,uVar7);
      if (sVar3 == 0) {
        this = (Socket *)SSL::getSocket(param_1);
        cVar1 = Socket::WouldBlock(this);
        if (cVar1 != '\0') {
          SSL::SetError(param_1,0x50);
          return 0xfffffff8;
        }
      }
      uVar5 = (**(code **)(*(int *)param_2 + 0x10))(param_2);
      uVar5 = uVar5 & 0xffff;
    }
  }
  else {
    uVar5 = 0xffffffff;
  }
  return uVar5;
}
```
