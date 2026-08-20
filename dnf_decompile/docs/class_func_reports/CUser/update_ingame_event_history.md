# update_ingame_event_history

`_ZN5CUser27update_ingame_event_historyEi`

`CUser::update_ingame_event_history(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868d72c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868d72c  _ZN5CUser27update_ingame_event_historyEi
#           CUser::update_ingame_event_history(int)
# range [0x0868d72c, 0x0868d74f]
0868d72c +0x00:  push   %ebp
0868d72d +0x01:  mov    %esp,%ebp
0868d72f +0x03:  sub    $0x18,%esp
0868d732 +0x06:  mov    0x8(%ebp),%eax
0868d735 +0x09:  lea    0x8eb80(%eax),%edx
0868d73b +0x0f:  lea    0xc(%ebp),%eax
0868d73e +0x12:  mov    %eax,0x4(%esp)
0868d742 +0x16:  mov    %edx,(%esp)
0868d745 +0x19:  call   0869ca68 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x92bd>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x92bd
0868d74a +0x1e:  movb   $0x1,(%eax)
0868d74d +0x21:  leave
0868d74e +0x22:  ret
0868d74f +0x23:  nop
```

## 反编译 C

```c
// CUser::update_ingame_event_history @ 0x868d72c

/* CUser::update_ingame_event_history(int) */

void CUser::update_ingame_event_history(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)
           std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>::operator[]
                     ((map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>> *)
                      (param_1 + 0x8eb80),(int *)&stack0x00000008);
  *puVar1 = 1;
  return;
}
```
