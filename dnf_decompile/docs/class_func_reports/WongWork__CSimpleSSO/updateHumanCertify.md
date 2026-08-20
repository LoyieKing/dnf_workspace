# updateHumanCertify

`_ZN8WongWork10CSimpleSSO18updateHumanCertifyEji`

`WongWork::CSimpleSSO::updateHumanCertify(unsigned int, int)`

| 类 | 地址 |
|---|---|
| `WongWork::CSimpleSSO` | `0x08603226` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08603226  _ZN8WongWork10CSimpleSSO18updateHumanCertifyEji
#           WongWork::CSimpleSSO::updateHumanCertify(unsigned int, int)
# range [0x08603226, 0x08603304]
08603226 +0x00:  push   %ebp
08603227 +0x01:  mov    %esp,%ebp
08603229 +0x03:  sub    $0x48,%esp
0860322c +0x06:  movl   $0x14,0x8(%esp)
08603234 +0x0e:  movl   $0x0,0x4(%esp)
0860323c +0x16:  lea    -0x20(%ebp),%eax
0860323f +0x19:  mov    %eax,(%esp)
08603242 +0x1c:  call   0807dcc0 <_init+0x5b8>
08603247 +0x21:  movl   $0xd,0x8(%esp)
0860324f +0x29:  movl   $"member_login",0x4(%esp)
08603257 +0x31:  lea    -0x20(%ebp),%eax
0860325a +0x34:  mov    %eax,(%esp)
0860325d +0x37:  call   0807d8a0 <_init+0x198>
08603262 +0x3c:  cmpl   $0x0,0x10(%ebp)
08603266 +0x40:  setne  %al
08603269 +0x43:  movzbl %al,%eax
0860326c +0x46:  mov    %eax,-0xc(%ebp)
0860326f +0x49:  movl   $0x0,0x4(%esp)
08603277 +0x51:  mov    0xc(%ebp),%eax
0860327a +0x54:  mov    %eax,(%esp)
0860327d +0x57:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08603282 +0x5c:  mov    0x8(%ebp),%edx
08603285 +0x5f:  mov    0xd0860(%edx),%edx
0860328b +0x65:  mov    %eax,0x14(%esp)
0860328f +0x69:  mov    -0xc(%ebp),%eax
08603292 +0x6c:  mov    %eax,0x10(%esp)
08603296 +0x70:  mov    0x10(%ebp),%eax
08603299 +0x73:  mov    %eax,0xc(%esp)
0860329d +0x77:  lea    -0x20(%ebp),%eax
086032a0 +0x7a:  mov    %eax,0x8(%esp)
086032a4 +0x7e:  movl   $"upDate %s set last_play_time=unix_timestamp(now()),account_fail=%d,total_account_fail=total_account_fail+%d where m_id=%s",0x4(%esp)
086032ac +0x86:  mov    %edx,(%esp)
086032af +0x89:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
086032b4 +0x8e:  mov    0x8(%ebp),%eax
086032b7 +0x91:  mov    0xd0860(%eax),%eax
086032bd +0x97:  movl   $0x1,0x4(%esp)
086032c5 +0x9f:  mov    %eax,(%esp)
086032c8 +0xa2:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
086032cd +0xa7:  xor    $0x1,%eax
086032d0 +0xaa:  test   %al,%al
086032d2 +0xac:  je     086032db <+0xb5>
086032d4 +0xae:  mov    $0x0,%eax
086032d9 +0xb3:  jmp    08603303 <+0xdd>
086032db +0xb5:  mov    0x8(%ebp),%eax
086032de +0xb8:  mov    0xd0860(%eax),%eax
086032e4 +0xbe:  mov    %eax,(%esp)
086032e7 +0xc1:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
086032ec +0xc6:  or     %edx,%eax
086032ee +0xc8:  test   %eax,%eax
086032f0 +0xca:  sete   %al
086032f3 +0xcd:  test   %al,%al
086032f5 +0xcf:  je     086032fe <+0xd8>
086032f7 +0xd1:  mov    $0x0,%eax
086032fc +0xd6:  jmp    08603303 <+0xdd>
086032fe +0xd8:  mov    $0x1,%eax
08603303 +0xdd:  leave
08603304 +0xde:  ret
```

## 反编译 C

```c
// WongWork::CSimpleSSO::updateHumanCertify @ 0x8603226

/* WongWork::CSimpleSSO::updateHumanCertify(unsigned int, int) */

undefined4 __thiscall
WongWork::CSimpleSSO::updateHumanCertify(CSimpleSSO *this,uint param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 local_24 [20];
  uint local_10;
  
  memset(local_24,0,0x14);
  memcpy(local_24,"member_login",0xd);
  local_10 = (uint)(param_2 != 0);
  uVar2 = NumberToString(param_1,0);
  MySQL::set_query(*(MySQL **)(this + 0xd0860),
                   "upDate %s set last_play_time=unix_timestamp(now()),account_fail=%d,total_account_fail=total_account_fail+%d where m_id=%s"
                   ,local_24,param_2,local_10,uVar2);
  cVar1 = MySQL::exec(*(MySQL **)(this + 0xd0860),true);
  if (cVar1 == '\x01') {
    lVar3 = MySQL::getAffectedRowCount(*(MySQL **)(this + 0xd0860));
    if (lVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
