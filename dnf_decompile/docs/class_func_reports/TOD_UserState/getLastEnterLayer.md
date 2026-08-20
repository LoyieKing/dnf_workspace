# getLastEnterLayer

`_ZNK13TOD_UserState17getLastEnterLayerEv`

`TOD_UserState::getLastEnterLayer() const`

| 类 | 地址 |
|---|---|
| `TOD_UserState` | `0x08643942` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08643942  _ZNK13TOD_UserState17getLastEnterLayerEv
#           TOD_UserState::getLastEnterLayer() const
# range [0x08643942, 0x08643969]
08643942 +0x00:  push   %ebp
08643943 +0x01:  mov    %esp,%ebp
08643945 +0x03:  push   %ebx
08643946 +0x04:  sub    $0x14,%esp
08643949 +0x07:  mov    0x8(%ebp),%ebx
0864394c +0x0a:  mov    %ebx,%eax
0864394e +0x0c:  mov    0xc(%ebp),%edx
08643951 +0x0f:  add    $0x14,%edx
08643954 +0x12:  mov    %edx,0x4(%esp)
08643958 +0x16:  mov    %eax,(%esp)
0864395b +0x19:  call   085ff0fa <_GLOBAL__I__ZN9TOD_LayerC2Et+0x1d>  ; global constructors keyed to TOD_Layer::TOD_Layer(unsigned short)+0x1d
08643960 +0x1e:  mov    %ebx,%eax
08643962 +0x20:  mov    %ebx,%eax
08643964 +0x22:  add    $0x14,%esp
08643967 +0x25:  pop    %ebx
08643968 +0x26:  pop    %ebp
08643969 +0x27:  ret    $0x4
```

## 反编译 C

```c
// TOD_UserState::getLastEnterLayer @ 0x8643942

/* TOD_UserState::getLastEnterLayer() const */

TOD_Layer * TOD_UserState::getLastEnterLayer(void)

{
  TOD_Layer *in_stack_00000004;
  int in_stack_00000008;
  
  TOD_Layer::TOD_Layer(in_stack_00000004,(TOD_Layer *)(in_stack_00000008 + 0x14));
  return in_stack_00000004;
}
```
