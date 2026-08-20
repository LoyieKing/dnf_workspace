# dispatch

`_ZN23DB_ArrangeUserLoginInfo8dispatchEiiP6Stream`

`DB_ArrangeUserLoginInfo::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_ArrangeUserLoginInfo` | `0x0842acf4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842acf4  _ZN23DB_ArrangeUserLoginInfo8dispatchEiiP6Stream
#           DB_ArrangeUserLoginInfo::dispatch(int, int, Stream*)
# range [0x0842acf4, 0x0842ad2f]
0842acf4 +0x00:  push   %ebp
0842acf5 +0x01:  mov    %esp,%ebp
0842acf7 +0x03:  sub    $0x28,%esp
0842acfa +0x06:  mov    0x14(%ebp),%eax
0842acfd +0x09:  mov    %eax,(%esp)
0842ad00 +0x0c:  call   0845254a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x5160>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x5160
0842ad05 +0x11:  mov    %eax,-0xc(%ebp)
0842ad08 +0x14:  mov    -0xc(%ebp),%eax
0842ad0b +0x17:  movzbl 0x4(%eax),%eax
0842ad0f +0x1b:  cmp    $0x1,%al
0842ad11 +0x1d:  jne    0842ad29 <+0x35>
0842ad13 +0x1f:  mov    -0xc(%ebp),%eax
0842ad16 +0x22:  mov    (%eax),%edx
0842ad18 +0x24:  mov    &_ZN10GlobalData12s_psimpleSSOE,%eax
0842ad1d +0x29:  mov    %edx,0x4(%esp)
0842ad21 +0x2d:  mov    %eax,(%esp)
0842ad24 +0x30:  call   08602b24 <_ZN8WongWork10CSimpleSSO15expireLoginTimeEj>  ; WongWork::CSimpleSSO::expireLoginTime(unsigned int)
0842ad29 +0x35:  mov    $0x1,%eax
0842ad2e +0x3a:  leave
0842ad2f +0x3b:  ret
```

## 反编译 C

```c
// DB_ArrangeUserLoginInfo::dispatch @ 0x842acf4

/* DB_ArrangeUserLoginInfo::dispatch(int, int, Stream*) */

undefined4 DB_ArrangeUserLoginInfo::dispatch(int param_1,int param_2,Stream *param_3)

{
  SIG_ARRANGE_USER_LOGIN_INFO *pSVar1;
  Stream *in_stack_00000010;
  
  pSVar1 = Stream::GetOutBuffer<SIG_ARRANGE_USER_LOGIN_INFO>(in_stack_00000010);
  if (pSVar1[4] == (SIG_ARRANGE_USER_LOGIN_INFO)0x1) {
    WongWork::CSimpleSSO::expireLoginTime(GlobalData::s_psimpleSSO,*(uint *)pSVar1);
  }
  return 1;
}
```
