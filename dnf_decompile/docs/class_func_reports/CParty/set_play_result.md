# set_play_result

`_ZN6CParty15set_play_resultEP5CUserR13GameResultSet`

`CParty::set_play_result(CUser*, GameResultSet&)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b2068` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b2068  _ZN6CParty15set_play_resultEP5CUserR13GameResultSet
#           CParty::set_play_result(CUser*, GameResultSet&)
# range [0x085b2068, 0x085b210b]
085b2068 +0x00:  push   %ebp
085b2069 +0x01:  mov    %esp,%ebp
085b206b +0x03:  sub    $0x28,%esp
085b206e +0x06:  movl   $0x0,-0x10(%ebp)
085b2075 +0x0d:  mov    0x8(%ebp),%eax
085b2078 +0x10:  mov    0x70(%eax),%eax
085b207b +0x13:  cmp    0xc(%ebp),%eax
085b207e +0x16:  je     085b2088 <+0x20>
085b2080 +0x18:  mov    -0x10(%ebp),%eax
085b2083 +0x1b:  jmp    085b210a <+0xa2>
085b2088 +0x20:  mov    0x8(%ebp),%eax
085b208b +0x23:  movzbl 0x118(%eax),%eax
085b2092 +0x2a:  test   %al,%al
085b2094 +0x2c:  je     085b209b <+0x33>
085b2096 +0x2e:  mov    -0x10(%ebp),%eax
085b2099 +0x31:  jmp    085b210a <+0xa2>
085b209b +0x33:  movl   $0x0,-0xc(%ebp)
085b20a2 +0x3a:  jmp    085b20eb <+0x83>
085b20a4 +0x3c:  mov    -0xc(%ebp),%eax
085b20a7 +0x3f:  mov    %eax,0x4(%esp)
085b20ab +0x43:  mov    0x8(%ebp),%eax
085b20ae +0x46:  mov    %eax,(%esp)
085b20b1 +0x49:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085b20b6 +0x4e:  xor    $0x1,%eax
085b20b9 +0x51:  test   %al,%al
085b20bb +0x53:  jne    085b20e6 <+0x7e>
085b20bd +0x55:  mov    -0xc(%ebp),%edx
085b20c0 +0x58:  mov    0x8(%ebp),%ecx
085b20c3 +0x5b:  mov    %edx,%eax
085b20c5 +0x5d:  add    %eax,%eax
085b20c7 +0x5f:  add    %edx,%eax
085b20c9 +0x61:  shl    $0x3,%eax
085b20cc +0x64:  lea    (%ecx,%eax,1),%eax
085b20cf +0x67:  add    $0x78,%eax
085b20d2 +0x6a:  mov    (%eax),%eax
085b20d4 +0x6c:  movl   $0xffffffff,0x4(%esp)
085b20dc +0x74:  mov    %eax,(%esp)
085b20df +0x77:  call   0867cb70 <_ZN5CUser22setPlayingDungeonIndexEi>  ; CUser::setPlayingDungeonIndex(int)
085b20e4 +0x7c:  jmp    085b20e7 <+0x7f>
085b20e6 +0x7e:  nop
085b20e7 +0x7f:  addl   $0x1,-0xc(%ebp)
085b20eb +0x83:  cmpl   $0x3,-0xc(%ebp)
085b20ef +0x87:  setle  %al
085b20f2 +0x8a:  test   %al,%al
085b20f4 +0x8c:  jne    085b20a4 <+0x3c>
085b20f6 +0x8e:  mov    0x8(%ebp),%eax
085b20f9 +0x91:  movb   $0x3,0x6a(%eax)
085b20fd +0x95:  mov    0x8(%ebp),%eax
085b2100 +0x98:  movb   $0x1,0x118(%eax)
085b2107 +0x9f:  mov    -0x10(%ebp),%eax
085b210a +0xa2:  leave
085b210b +0xa3:  ret
```

## 反编译 C

```c
// CParty::set_play_result @ 0x85b2068

/* CParty::set_play_result(CUser*, GameResultSet&) */

undefined4 CParty::set_play_result(CUser *param_1,GameResultSet *param_2)

{
  char cVar1;
  int local_10;
  
  if ((*(GameResultSet **)(param_1 + 0x70) == param_2) && (param_1[0x118] == (CUser)0x0)) {
    for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
      cVar1 = _checkValidUser((CParty *)param_1,local_10);
      if (cVar1 == '\x01') {
        CUser::setPlayingDungeonIndex(*(CUser **)(param_1 + local_10 * 0x18 + 0x78),-1);
      }
    }
    param_1[0x6a] = (CUser)0x3;
    param_1[0x118] = (CUser)0x1;
  }
  return 0;
}
```
