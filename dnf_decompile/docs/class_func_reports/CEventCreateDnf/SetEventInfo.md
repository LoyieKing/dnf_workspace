# SetEventInfo

`_ZN15CEventCreateDnf12SetEventInfoEiii`

`CEventCreateDnf::SetEventInfo(int, int, int)`

| 类 | 地址 |
|---|---|
| `CEventCreateDnf` | `0x081640d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081640d4  _ZN15CEventCreateDnf12SetEventInfoEiii
#           CEventCreateDnf::SetEventInfo(int, int, int)
# range [0x081640d4, 0x08164245]
081640d4 +0x000:  push   %ebp
081640d5 +0x001:  mov    %esp,%ebp
081640d7 +0x003:  push   %ebx
081640d8 +0x004:  sub    $0x44,%esp
081640db +0x007:  mov    0x8(%ebp),%eax
081640de +0x00a:  mov    %eax,(%esp)
081640e1 +0x00d:  call   08164246 <_ZN15CEventCreateDnf8GetStateEv>  ; CEventCreateDnf::GetState()
081640e6 +0x012:  cmp    $0x2,%eax
081640e9 +0x015:  jne    08164110 <+0x3c>
081640eb +0x017:  mov    0x8(%ebp),%eax
081640ee +0x01a:  movzbl 0x10(%eax),%eax
081640f2 +0x01e:  movzbl %al,%eax
081640f5 +0x021:  cmp    0xc(%ebp),%eax
081640f8 +0x024:  jle    08164110 <+0x3c>
081640fa +0x026:  mov    0x8(%ebp),%eax
081640fd +0x029:  movzbl 0x11(%eax),%eax
08164101 +0x02d:  movzbl %al,%eax
08164104 +0x030:  cmp    0xc(%ebp),%eax
08164107 +0x033:  jg     08164110 <+0x3c>
08164109 +0x035:  mov    $0x1,%eax
0816410e +0x03a:  jmp    08164115 <+0x41>
08164110 +0x03c:  mov    $0x0,%eax
08164115 +0x041:  test   %al,%al
08164117 +0x043:  je     08164162 <+0x8e>
08164119 +0x045:  mov    0x8(%ebp),%eax
0816411c +0x048:  movzwl 0x16(%eax),%eax
08164120 +0x04c:  movzwl %ax,%ebx
08164123 +0x04f:  movl   $0x0,0xc(%esp)
0816412b +0x057:  movl   $0x8e,0x8(%esp)
08164133 +0x05f:  movl   $&_ZZN15CEventCreateDnf12SetEventInfoEiiiE19__PRETTY_FUNCTION__,0x4(%esp)
0816413b +0x067:  lea    -0x38(%ebp),%eax
0816413e +0x06a:  mov    %eax,(%esp)
08164141 +0x06d:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08164146 +0x072:  mov    %ebx,0x8(%esp)
0816414a +0x076:  movl   $"[Taiwan, CreateDnfEvent] State:kReward rate:%d",0x4(%esp)
08164152 +0x07e:  lea    -0x38(%ebp),%eax
08164155 +0x081:  mov    %eax,(%esp)
08164158 +0x084:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0816415d +0x089:  jmp    0816423f <+0x16b>
08164162 +0x08e:  mov    0x8(%ebp),%eax
08164165 +0x091:  movzbl 0x10(%eax),%eax
08164169 +0x095:  movzbl %al,%eax
0816416c +0x098:  cmp    0xc(%ebp),%eax
0816416f +0x09b:  jg     081641d2 <+0xfe>
08164171 +0x09d:  mov    0x8(%ebp),%eax
08164174 +0x0a0:  movzbl 0x11(%eax),%eax
08164178 +0x0a4:  movzbl %al,%eax
0816417b +0x0a7:  cmp    0xc(%ebp),%eax
0816417e +0x0aa:  jle    081641d2 <+0xfe>
08164180 +0x0ac:  movl   $0x1,0x4(%esp)
08164188 +0x0b4:  mov    0x8(%ebp),%eax
0816418b +0x0b7:  mov    %eax,(%esp)
0816418e +0x0ba:  call   08164252 <_ZN15CEventCreateDnf8setStateENS_5State1TE>  ; CEventCreateDnf::setState(CEventCreateDnf::State::T)
08164193 +0x0bf:  movl   $0x0,0xc(%esp)
0816419b +0x0c7:  movl   $0x95,0x8(%esp)
081641a3 +0x0cf:  movl   $&_ZZN15CEventCreateDnf12SetEventInfoEiiiE19__PRETTY_FUNCTION__,0x4(%esp)
081641ab +0x0d7:  lea    -0x28(%ebp),%eax
081641ae +0x0da:  mov    %eax,(%esp)
081641b1 +0x0dd:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081641b6 +0x0e2:  mov    0x10(%ebp),%eax
081641b9 +0x0e5:  mov    %eax,0x8(%esp)
081641bd +0x0e9:  movl   $"[Taiwan, CreateDnfEvent] State:kIng rate:%d",0x4(%esp)
081641c5 +0x0f1:  lea    -0x28(%ebp),%eax
081641c8 +0x0f4:  mov    %eax,(%esp)
081641cb +0x0f7:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081641d0 +0x0fc:  jmp    08164222 <+0x14e>
081641d2 +0x0fe:  movl   $0x2,0x4(%esp)
081641da +0x106:  mov    0x8(%ebp),%eax
081641dd +0x109:  mov    %eax,(%esp)
081641e0 +0x10c:  call   08164252 <_ZN15CEventCreateDnf8setStateENS_5State1TE>  ; CEventCreateDnf::setState(CEventCreateDnf::State::T)
081641e5 +0x111:  movl   $0x0,0xc(%esp)
081641ed +0x119:  movl   $0x9a,0x8(%esp)
081641f5 +0x121:  movl   $&_ZZN15CEventCreateDnf12SetEventInfoEiiiE19__PRETTY_FUNCTION__,0x4(%esp)
081641fd +0x129:  lea    -0x18(%ebp),%eax
08164200 +0x12c:  mov    %eax,(%esp)
08164203 +0x12f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08164208 +0x134:  mov    0x10(%ebp),%eax
0816420b +0x137:  mov    %eax,0x8(%esp)
0816420f +0x13b:  movl   $"[Taiwan, CreateDnfEvent] State:kReward rate:%d",0x4(%esp)
08164217 +0x143:  lea    -0x18(%ebp),%eax
0816421a +0x146:  mov    %eax,(%esp)
0816421d +0x149:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08164222 +0x14e:  mov    0x10(%ebp),%eax
08164225 +0x151:  mov    %eax,%edx
08164227 +0x153:  mov    0x8(%ebp),%eax
0816422a +0x156:  mov    %dx,0x16(%eax)
0816422e +0x15a:  cmpl   $0x0,0x14(%ebp)
08164232 +0x15e:  je     0816423f <+0x16b>
08164234 +0x160:  mov    0x14(%ebp),%eax
08164237 +0x163:  mov    %eax,%edx
08164239 +0x165:  mov    0x8(%ebp),%eax
0816423c +0x168:  mov    %dl,0x14(%eax)
0816423f +0x16b:  add    $0x44,%esp
08164242 +0x16e:  pop    %ebx
08164243 +0x16f:  pop    %ebp
08164244 +0x170:  ret
08164245 +0x171:  nop
```

## 反编译 C

```c
// CEventCreateDnf::SetEventInfo @ 0x81640d4

/* CEventCreateDnf::SetEventInfo(int, int, int) */

void __thiscall
CEventCreateDnf::SetEventInfo(CEventCreateDnf *this,int param_1,int param_2,int param_3)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  cMyTrace local_3c [16];
  cMyTrace local_2c [16];
  cMyTrace local_1c [20];
  
  iVar3 = GetState(this);
  if (((iVar3 == 2) && (param_1 < (int)(uint)(byte)this[0x10])) &&
     ((int)(uint)(byte)this[0x11] <= param_1)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    uVar1 = *(ushort *)(this + 0x16);
    cMyTrace::cMyTrace(local_3c,"void CEventCreateDnf::SetEventInfo(int, int, int)",0x8e,0);
    cMyTrace::operator()(local_3c,"[Taiwan, CreateDnfEvent] State:kReward rate:%d",(uint)uVar1);
  }
  else {
    if ((param_1 < (int)(uint)(byte)this[0x10]) || ((int)(uint)(byte)this[0x11] <= param_1)) {
      setState(this,2);
      cMyTrace::cMyTrace(local_1c,"void CEventCreateDnf::SetEventInfo(int, int, int)",0x9a,0);
      cMyTrace::operator()(local_1c,"[Taiwan, CreateDnfEvent] State:kReward rate:%d",param_2);
    }
    else {
      setState(this,1);
      cMyTrace::cMyTrace(local_2c,"void CEventCreateDnf::SetEventInfo(int, int, int)",0x95,0);
      cMyTrace::operator()(local_2c,"[Taiwan, CreateDnfEvent] State:kIng rate:%d",param_2);
    }
    *(short *)(this + 0x16) = (short)param_2;
    if (param_3 != 0) {
      this[0x14] = SUB41(param_3,0);
    }
  }
  return;
}
```
