# UseDelilah

`_ZN10expert_job10CAlchemist10UseDelilahEP5CUser`

`expert_job::CAlchemist::UseDelilah(CUser*)`

| 类 | 地址 |
|---|---|
| `expert_job::CAlchemist` | `0x085d18ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d18ae  _ZN10expert_job10CAlchemist10UseDelilahEP5CUser
#           expert_job::CAlchemist::UseDelilah(CUser*)
# range [0x085d18ae, 0x085d18e1]
085d18ae +0x00:  push   %ebp
085d18af +0x01:  mov    %esp,%ebp
085d18b1 +0x03:  sub    $0x28,%esp
085d18b4 +0x06:  mov    0x8(%ebp),%eax
085d18b7 +0x09:  mov    %eax,(%esp)
085d18ba +0x0c:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
085d18bf +0x11:  mov    %eax,-0xc(%ebp)
085d18c2 +0x14:  cmpl   $0x0,-0xc(%ebp)
085d18c6 +0x18:  je     085d18e0 <+0x32>
085d18c8 +0x1a:  mov    -0xc(%ebp),%eax
085d18cb +0x1d:  add    $0xb24,%eax
085d18d0 +0x22:  movl   $0x1,0x4(%esp)
085d18d8 +0x2a:  mov    %eax,(%esp)
085d18db +0x2d:  call   085d19d6 <_GLOBAL__I__ZN10expert_job10CAlchemistC2Ev+0x1d>  ; global constructors keyed to expert_job::CAlchemist::CAlchemist()+0x1d
085d18e0 +0x32:  leave
085d18e1 +0x33:  ret
```

## 反编译 C

```c
// expert_job::CAlchemist::UseDelilah @ 0x85d18ae

/* expert_job::CAlchemist::UseDelilah(CUser*) */

void expert_job::CAlchemist::UseDelilah(CUser *param_1)

{
  int iVar1;
  
  iVar1 = CUser::GetParty(param_1);
  if (iVar1 != 0) {
    CBattle_Field::SetAssignNPCByPotion((CBattle_Field *)(iVar1 + 0xb24),true);
  }
  return;
}
```
