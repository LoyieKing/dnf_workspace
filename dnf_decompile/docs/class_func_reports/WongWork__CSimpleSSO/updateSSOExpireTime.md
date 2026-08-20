# updateSSOExpireTime

`_ZN8WongWork10CSimpleSSO19updateSSOExpireTimeEjRKNS0_23stUpdateSSOExpireTime_tE`

`WongWork::CSimpleSSO::updateSSOExpireTime(unsigned int, WongWork::CSimpleSSO::stUpdateSSOExpireTime_t const&)`

| 类 | 地址 |
|---|---|
| `WongWork::CSimpleSSO` | `0x08602906` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08602906  _ZN8WongWork10CSimpleSSO19updateSSOExpireTimeEjRKNS0_23stUpdateSSOExpireTime_tE
#           WongWork::CSimpleSSO::updateSSOExpireTime(unsigned int, WongWork::CSimpleSSO::stUpdateSSOExpireTime_t const&)
# range [0x08602906, 0x08602a49]
08602906 +0x000:  push   %ebp
08602907 +0x001:  mov    %esp,%ebp
08602909 +0x003:  push   %edi
0860290a +0x004:  push   %esi
0860290b +0x005:  push   %ebx
0860290c +0x006:  sub    $0x7c,%esp
0860290f +0x009:  movl   $0x14,0x8(%esp)
08602917 +0x011:  movl   $0x0,0x4(%esp)
0860291f +0x019:  lea    -0x2c(%ebp),%eax
08602922 +0x01c:  mov    %eax,(%esp)
08602925 +0x01f:  call   0807dcc0 <_init+0x5b8>
0860292a +0x024:  movl   $0xd,0x8(%esp)
08602932 +0x02c:  movl   $"member_login",0x4(%esp)
0860293a +0x034:  lea    -0x2c(%ebp),%eax
0860293d +0x037:  mov    %eax,(%esp)
08602940 +0x03a:  call   0807d8a0 <_init+0x198>
08602945 +0x03f:  movl   $0x0,0x4(%esp)
0860294d +0x047:  mov    0xc(%ebp),%eax
08602950 +0x04a:  mov    %eax,(%esp)
08602953 +0x04d:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08602958 +0x052:  mov    %eax,%ebx
0860295a +0x054:  mov    0x10(%ebp),%eax
0860295d +0x057:  movzbl 0x10(%eax),%eax
08602961 +0x05b:  movzbl %al,%eax
08602964 +0x05e:  mov    %eax,-0x4c(%ebp)
08602967 +0x061:  mov    0x10(%ebp),%eax
0860296a +0x064:  flds   0xc(%eax)
0860296d +0x067:  fstpl  -0x48(%ebp)
08602970 +0x06a:  mov    0x10(%ebp),%eax
08602973 +0x06d:  mov    0x8(%eax),%eax
08602976 +0x070:  mov    %eax,-0x40(%ebp)
08602979 +0x073:  mov    0x10(%ebp),%eax
0860297c +0x076:  mov    0x4(%eax),%eax
0860297f +0x079:  mov    %eax,-0x3c(%ebp)
08602982 +0x07c:  mov    0x10(%ebp),%eax
08602985 +0x07f:  mov    (%eax),%edi
08602987 +0x081:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0860298e +0x088:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08602993 +0x08d:  mov    %eax,%esi
08602995 +0x08f:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0860299c +0x096:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
086029a1 +0x09b:  lea    0xb4(%eax),%ecx
086029a7 +0x0a1:  mov    0x8(%ebp),%eax
086029aa +0x0a4:  mov    0xd0860(%eax),%edx
086029b0 +0x0aa:  mov    %ebx,0x2c(%esp)
086029b4 +0x0ae:  mov    -0x4c(%ebp),%eax
086029b7 +0x0b1:  mov    %eax,0x28(%esp)
086029bb +0x0b5:  fldl   -0x48(%ebp)
086029be +0x0b8:  fstpl  0x20(%esp)
086029c2 +0x0bc:  mov    -0x40(%ebp),%eax
086029c5 +0x0bf:  mov    %eax,0x1c(%esp)
086029c9 +0x0c3:  mov    -0x3c(%ebp),%eax
086029cc +0x0c6:  mov    %eax,0x18(%esp)
086029d0 +0x0ca:  mov    %edi,0x14(%esp)
086029d4 +0x0ce:  mov    %esi,0x10(%esp)
086029d8 +0x0d2:  mov    %ecx,0xc(%esp)
086029dc +0x0d6:  lea    -0x2c(%ebp),%eax
086029df +0x0d9:  mov    %eax,0x8(%esp)
086029e3 +0x0dd:  movl   $"upDate %s set expire_time=%d,last_play_time=%d,report_cnt=%d,trade_gold_daily=%d,dungeon_gain_gold=%d,rating=%f,tutorial_skipable=%d where m_id=%s",0x4(%esp)
086029eb +0x0e5:  mov    %edx,(%esp)
086029ee +0x0e8:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
086029f3 +0x0ed:  mov    0x8(%ebp),%eax
086029f6 +0x0f0:  mov    0xd0860(%eax),%eax
086029fc +0x0f6:  movl   $0x1,0x4(%esp)
08602a04 +0x0fe:  mov    %eax,(%esp)
08602a07 +0x101:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08602a0c +0x106:  xor    $0x1,%eax
08602a0f +0x109:  test   %al,%al
08602a11 +0x10b:  je     08602a1a <+0x114>
08602a13 +0x10d:  mov    $0x0,%eax
08602a18 +0x112:  jmp    08602a42 <+0x13c>
08602a1a +0x114:  mov    0x8(%ebp),%eax
08602a1d +0x117:  mov    0xd0860(%eax),%eax
08602a23 +0x11d:  mov    %eax,(%esp)
08602a26 +0x120:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
08602a2b +0x125:  or     %edx,%eax
08602a2d +0x127:  test   %eax,%eax
08602a2f +0x129:  sete   %al
08602a32 +0x12c:  test   %al,%al
08602a34 +0x12e:  je     08602a3d <+0x137>
08602a36 +0x130:  mov    $0x0,%eax
08602a3b +0x135:  jmp    08602a42 <+0x13c>
08602a3d +0x137:  mov    $0x1,%eax
08602a42 +0x13c:  add    $0x7c,%esp
08602a45 +0x13f:  pop    %ebx
08602a46 +0x140:  pop    %esi
08602a47 +0x141:  pop    %edi
08602a48 +0x142:  pop    %ebp
08602a49 +0x143:  ret
```

## 反编译 C

```c
// WongWork::CSimpleSSO::updateSSOExpireTime @ 0x8602906

/* WongWork::CSimpleSSO::updateSSOExpireTime(unsigned int,
   WongWork::CSimpleSSO::stUpdateSSOExpireTime_t const&) */

undefined4 __thiscall
WongWork::CSimpleSSO::updateSSOExpireTime
          (CSimpleSSO *this,uint param_1,stUpdateSSOExpireTime_t *param_2)

{
  float fVar1;
  stUpdateSSOExpireTime_t sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined1 local_30 [32];
  
  memset(local_30,0,0x14);
  memcpy(local_30,"member_login",0xd);
  uVar6 = NumberToString(param_1,0);
  sVar2 = param_2[0x10];
  fVar1 = *(float *)(param_2 + 0xc);
  uVar9 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 4);
  uVar4 = *(undefined4 *)param_2;
  uVar7 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  iVar8 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  MySQL::set_query(*(MySQL **)(this + 0xd0860),
                   "upDate %s set expire_time=%d,last_play_time=%d,report_cnt=%d,trade_gold_daily=%d,dungeon_gain_gold=%d,rating=%f,tutorial_skipable=%d where m_id=%s"
                   ,local_30,iVar8 + 0xb4,uVar7,uVar4,uVar3,uVar9,(double)fVar1,(uint)(byte)sVar2,
                   uVar6);
  cVar5 = MySQL::exec(*(MySQL **)(this + 0xd0860),true);
  if (cVar5 == '\x01') {
    lVar10 = MySQL::getAffectedRowCount(*(MySQL **)(this + 0xd0860));
    if (lVar10 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = 1;
    }
  }
  else {
    uVar9 = 0;
  }
  return uVar9;
}
```
