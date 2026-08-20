# SendToMessageAllUser

`_ZN8APSystem9CUserProc20SendToMessageAllUserEPKcS2_`

`APSystem::CUserProc::SendToMessageAllUser(char const*, char const*)`

| 类 | 地址 |
|---|---|
| `APSystem::CUserProc` | `0x08122572` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08122572  _ZN8APSystem9CUserProc20SendToMessageAllUserEPKcS2_
#           APSystem::CUserProc::SendToMessageAllUser(char const*, char const*)
# range [0x08122572, 0x081225d1]
08122572 +0x00:  push   %ebp
08122573 +0x01:  mov    %esp,%ebp
08122575 +0x03:  sub    $0x428,%esp
0812257b +0x09:  cmpl   $0x0,0x8(%ebp)
0812257f +0x0d:  je     081225cb <+0x59>
08122581 +0x0f:  cmpl   $0x0,0xc(%ebp)
08122585 +0x13:  je     081225ce <+0x5c>
08122587 +0x15:  mov    0x8(%ebp),%eax
0812258a +0x18:  mov    %eax,0x8(%esp)
0812258e +0x1c:  mov    0xc(%ebp),%eax
08122591 +0x1f:  mov    %eax,0x4(%esp)
08122595 +0x23:  lea    -0x418(%ebp),%eax
0812259b +0x29:  mov    %eax,(%esp)
0812259e +0x2c:  call   0807e440 <_init+0xd38>
081225a3 +0x31:  movl   $"",-0x18(%ebp)
081225aa +0x38:  lea    -0x418(%ebp),%eax
081225b0 +0x3e:  mov    %eax,(%esp)
081225b3 +0x41:  call   0807e3b0 <_init+0xca8>
081225b8 +0x46:  mov    %eax,-0x14(%ebp)
081225bb +0x49:  movl   $0x0,-0x10(%ebp)
081225c2 +0x50:  movl   $0x0,-0xc(%ebp)
081225c9 +0x57:  jmp    081225cf <+0x5d>
081225cb +0x59:  nop
081225cc +0x5a:  jmp    081225cf <+0x5d>
081225ce +0x5c:  nop
081225cf +0x5d:  leave
081225d0 +0x5e:  ret
081225d1 +0x5f:  nop
```

## 反编译 C

```c
// APSystem::CUserProc::SendToMessageAllUser @ 0x8122572

/* APSystem::CUserProc::SendToMessageAllUser(char const*, char const*) */

void APSystem::CUserProc::SendToMessageAllUser(char *param_1,char *param_2)

{
  char local_41c [1024];
  undefined *local_1c;
  
  if ((param_1 != (char *)0x0) && (param_2 != (char *)0x0)) {
    sprintf(local_41c,param_2,param_1);
    local_1c = &DAT_08b5d4a0;
    strlen(local_41c);
  }
  return;
}
```
