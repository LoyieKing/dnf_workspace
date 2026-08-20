# reset_ingame_event_history_update

`_ZN5CUser33reset_ingame_event_history_updateEv`

`CUser::reset_ingame_event_history_update()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868d768` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868d768  _ZN5CUser33reset_ingame_event_history_updateEv
#           CUser::reset_ingame_event_history_update()
# range [0x0868d768, 0x0868d77f]
0868d768 +0x00:  push   %ebp
0868d769 +0x01:  mov    %esp,%ebp
0868d76b +0x03:  sub    $0x18,%esp
0868d76e +0x06:  mov    0x8(%ebp),%eax
0868d771 +0x09:  add    $0x8eb80,%eax
0868d776 +0x0e:  mov    %eax,(%esp)
0868d779 +0x11:  call   08557b9e <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x6ff>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x6ff
0868d77e +0x16:  leave
0868d77f +0x17:  ret
```

## 反编译 C

```c
// CUser::reset_ingame_event_history_update @ 0x868d768

/* CUser::reset_ingame_event_history_update() */

void __thiscall CUser::reset_ingame_event_history_update(CUser *this)

{
  std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>::clear
            ((map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>> *)
             (this + 0x8eb80));
  return;
}
```
