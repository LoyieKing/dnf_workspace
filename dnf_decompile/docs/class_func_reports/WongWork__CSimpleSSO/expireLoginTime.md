# expireLoginTime

`_ZN8WongWork10CSimpleSSO15expireLoginTimeEj`

`WongWork::CSimpleSSO::expireLoginTime(unsigned int)`

| 类 | 地址 |
|---|---|
| `WongWork::CSimpleSSO` | `0x08602b24` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08602b24  _ZN8WongWork10CSimpleSSO15expireLoginTimeEj
#           WongWork::CSimpleSSO::expireLoginTime(unsigned int)
# range [0x08602b24, 0x08602bcf]
08602b24 +0x00:  push   %ebp
08602b25 +0x01:  mov    %esp,%ebp
08602b27 +0x03:  push   %ebx
08602b28 +0x04:  sub    $0x44,%esp
08602b2b +0x07:  movl   $0x14,0x8(%esp)
08602b33 +0x0f:  movl   $0x0,0x4(%esp)
08602b3b +0x17:  lea    -0x1c(%ebp),%eax
08602b3e +0x1a:  mov    %eax,(%esp)
08602b41 +0x1d:  call   0807dcc0 <_init+0x5b8>
08602b46 +0x22:  movl   $0xd,0x8(%esp)
08602b4e +0x2a:  movl   $"member_login",0x4(%esp)
08602b56 +0x32:  lea    -0x1c(%ebp),%eax
08602b59 +0x35:  mov    %eax,(%esp)
08602b5c +0x38:  call   0807d8a0 <_init+0x198>
08602b61 +0x3d:  cmpl   $0x0,0xc(%ebp)
08602b65 +0x41:  je     08602bc9 <+0xa5>
08602b67 +0x43:  movl   $0x0,0x4(%esp)
08602b6f +0x4b:  mov    0xc(%ebp),%eax
08602b72 +0x4e:  mov    %eax,(%esp)
08602b75 +0x51:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08602b7a +0x56:  mov    %eax,%ebx
08602b7c +0x58:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08602b83 +0x5f:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08602b88 +0x64:  mov    0x8(%ebp),%edx
08602b8b +0x67:  mov    0xd0860(%edx),%edx
08602b91 +0x6d:  mov    %ebx,0x10(%esp)
08602b95 +0x71:  mov    %eax,0xc(%esp)
08602b99 +0x75:  lea    -0x1c(%ebp),%eax
08602b9c +0x78:  mov    %eax,0x8(%esp)
08602ba0 +0x7c:  movl   $"upDate %s set expire_time=%d where m_id=%s",0x4(%esp)
08602ba8 +0x84:  mov    %edx,(%esp)
08602bab +0x87:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08602bb0 +0x8c:  mov    0x8(%ebp),%eax
08602bb3 +0x8f:  mov    0xd0860(%eax),%eax
08602bb9 +0x95:  movl   $0x1,0x4(%esp)
08602bc1 +0x9d:  mov    %eax,(%esp)
08602bc4 +0xa0:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08602bc9 +0xa5:  add    $0x44,%esp
08602bcc +0xa8:  pop    %ebx
08602bcd +0xa9:  pop    %ebp
08602bce +0xaa:  ret
08602bcf +0xab:  nop
```

## 反编译 C

```c
// WongWork::CSimpleSSO::expireLoginTime @ 0x8602b24

/* WongWork::CSimpleSSO::expireLoginTime(unsigned int) */

void __thiscall WongWork::CSimpleSSO::expireLoginTime(CSimpleSSO *this,uint param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 local_20 [24];
  
  memset(local_20,0,0x14);
  memcpy(local_20,"member_login",0xd);
  if (param_1 != 0) {
    uVar1 = NumberToString(param_1,0);
    uVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    MySQL::set_query(*(MySQL **)(this + 0xd0860),"upDate %s set expire_time=%d where m_id=%s",
                     local_20,uVar2,uVar1);
    MySQL::exec(*(MySQL **)(this + 0xd0860),true);
  }
  return;
}
```
