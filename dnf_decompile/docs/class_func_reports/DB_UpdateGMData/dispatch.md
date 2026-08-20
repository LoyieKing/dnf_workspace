# dispatch

`_ZN15DB_UpdateGMData8dispatchEiiP6Stream`

`DB_UpdateGMData::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateGMData` | `0x0843990a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843990a  _ZN15DB_UpdateGMData8dispatchEiiP6Stream
#           DB_UpdateGMData::dispatch(int, int, Stream*)
# range [0x0843990a, 0x08439939]
0843990a +0x00:  push   %ebp
0843990b +0x01:  mov    %esp,%ebp
0843990d +0x03:  sub    $0x28,%esp
08439910 +0x06:  movb   $0x0,-0x9(%ebp)
08439914 +0x0a:  lea    -0x9(%ebp),%eax
08439917 +0x0d:  mov    %eax,0x4(%esp)
0843991b +0x11:  mov    0x14(%ebp),%eax
0843991e +0x14:  mov    %eax,(%esp)
08439921 +0x17:  call   0861c47c <_ZN6StreamrsERb>  ; Stream::operator>>(bool&)
08439926 +0x1c:  mov    &_ZN10GlobalData6gmListE,%eax
0843992b +0x21:  mov    %eax,(%esp)
0843992e +0x24:  call   0829996c <_ZN7Gm_List16LoadGmListFromDbEv>  ; Gm_List::LoadGmListFromDb()
08439933 +0x29:  mov    $0x1,%eax
08439938 +0x2e:  leave
08439939 +0x2f:  ret
```

## 反编译 C

```c
// DB_UpdateGMData::dispatch @ 0x843990a

/* DB_UpdateGMData::dispatch(int, int, Stream*) */

undefined4 DB_UpdateGMData::dispatch(int param_1,int param_2,Stream *param_3)

{
  Stream *in_stack_00000010;
  bool local_d [9];
  
  local_d[0] = false;
  Stream::operator>>(in_stack_00000010,local_d);
  Gm_List::LoadGmListFromDb(GlobalData::gmList);
  return 1;
}
```
