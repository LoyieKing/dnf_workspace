# updateSSOExpireTime

`_ZN8WongWork10CSimpleSSO19updateSSOExpireTimeEjj`

`WongWork::CSimpleSSO::updateSSOExpireTime(unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `WongWork::CSimpleSSO` | `0x08602a4a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08602a4a  _ZN8WongWork10CSimpleSSO19updateSSOExpireTimeEjj
#           WongWork::CSimpleSSO::updateSSOExpireTime(unsigned int, unsigned int)
# range [0x08602a4a, 0x08602b23]
08602a4a +0x00:  push   %ebp
08602a4b +0x01:  mov    %esp,%ebp
08602a4d +0x03:  push   %esi
08602a4e +0x04:  push   %ebx
08602a4f +0x05:  sub    $0x40,%esp
08602a52 +0x08:  movl   $0x14,0x8(%esp)
08602a5a +0x10:  movl   $0x0,0x4(%esp)
08602a62 +0x18:  lea    -0x1c(%ebp),%eax
08602a65 +0x1b:  mov    %eax,(%esp)
08602a68 +0x1e:  call   0807dcc0 <_init+0x5b8>
08602a6d +0x23:  movl   $0xd,0x8(%esp)
08602a75 +0x2b:  movl   $"member_login",0x4(%esp)
08602a7d +0x33:  lea    -0x1c(%ebp),%eax
08602a80 +0x36:  mov    %eax,(%esp)
08602a83 +0x39:  call   0807d8a0 <_init+0x198>
08602a88 +0x3e:  movl   $0x0,0x4(%esp)
08602a90 +0x46:  mov    0xc(%ebp),%eax
08602a93 +0x49:  mov    %eax,(%esp)
08602a96 +0x4c:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08602a9b +0x51:  mov    %eax,%esi
08602a9d +0x53:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08602aa4 +0x5a:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08602aa9 +0x5f:  mov    %eax,%ebx
08602aab +0x61:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08602ab2 +0x68:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08602ab7 +0x6d:  lea    0xb4(%eax),%edx
08602abd +0x73:  mov    0x8(%ebp),%eax
08602ac0 +0x76:  mov    0xd0860(%eax),%eax
08602ac6 +0x7c:  mov    %esi,0x18(%esp)
08602aca +0x80:  mov    %ebx,0x14(%esp)
08602ace +0x84:  mov    %edx,0x10(%esp)
08602ad2 +0x88:  mov    0x10(%ebp),%edx
08602ad5 +0x8b:  mov    %edx,0xc(%esp)
08602ad9 +0x8f:  lea    -0x1c(%ebp),%edx
08602adc +0x92:  mov    %edx,0x8(%esp)
08602ae0 +0x96:  movl   $"upDate %s set login_time=%d, expire_time=%d, last_play_time=%d where m_id=%s",0x4(%esp)
08602ae8 +0x9e:  mov    %eax,(%esp)
08602aeb +0xa1:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08602af0 +0xa6:  mov    0x8(%ebp),%eax
08602af3 +0xa9:  mov    0xd0860(%eax),%eax
08602af9 +0xaf:  movl   $0x1,0x4(%esp)
08602b01 +0xb7:  mov    %eax,(%esp)
08602b04 +0xba:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08602b09 +0xbf:  xor    $0x1,%eax
08602b0c +0xc2:  test   %al,%al
08602b0e +0xc4:  je     08602b17 <+0xcd>
08602b10 +0xc6:  mov    $0x0,%eax
08602b15 +0xcb:  jmp    08602b1c <+0xd2>
08602b17 +0xcd:  mov    $0x1,%eax
08602b1c +0xd2:  add    $0x40,%esp
08602b1f +0xd5:  pop    %ebx
08602b20 +0xd6:  pop    %esi
08602b21 +0xd7:  pop    %ebp
08602b22 +0xd8:  ret
08602b23 +0xd9:  nop
```

## 反编译 C

```c
// WongWork::CSimpleSSO::updateSSOExpireTime @ 0x8602a4a

/* WongWork::CSimpleSSO::updateSSOExpireTime(unsigned int, unsigned int) */

bool __thiscall
WongWork::CSimpleSSO::updateSSOExpireTime(CSimpleSSO *this,uint param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 local_20 [20];
  
  memset(local_20,0,0x14);
  memcpy(local_20,"member_login",0xd);
  uVar2 = NumberToString(param_1,0);
  uVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  iVar4 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  MySQL::set_query(*(MySQL **)(this + 0xd0860),
                   "upDate %s set login_time=%d, expire_time=%d, last_play_time=%d where m_id=%s",
                   local_20,param_2,iVar4 + 0xb4,uVar3,uVar2);
  cVar1 = MySQL::exec(*(MySQL **)(this + 0xd0860),true);
  return cVar1 == '\x01';
}
```
