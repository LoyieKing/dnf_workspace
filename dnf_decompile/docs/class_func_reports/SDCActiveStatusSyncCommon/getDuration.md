# getDuration

`_ZN25SDCActiveStatusSyncCommon11getDurationE17ENUM_ACTIVESTATUSiPv`

`SDCActiveStatusSyncCommon::getDuration(ENUM_ACTIVESTATUS, int, void*)`

| 类 | 地址 |
|---|---|
| `SDCActiveStatusSyncCommon` | `0x0808dc7a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808dc7a  _ZN25SDCActiveStatusSyncCommon11getDurationE17ENUM_ACTIVESTATUSiPv
#           SDCActiveStatusSyncCommon::getDuration(ENUM_ACTIVESTATUS, int, void*)
# range [0x0808dc7a, 0x0808dcc3]
0808dc7a +0x00:  push   %ebp
0808dc7b +0x01:  mov    %esp,%ebp
0808dc7d +0x03:  push   %ebx
0808dc7e +0x04:  sub    $0x34,%esp
0808dc81 +0x07:  mov    0x14(%ebp),%eax
0808dc84 +0x0a:  mov    %eax,-0xc(%ebp)
0808dc87 +0x0d:  mov    -0xc(%ebp),%eax
0808dc8a +0x10:  mov    0x31(%eax),%ebx
0808dc8d +0x13:  mov    -0xc(%ebp),%eax
0808dc90 +0x16:  mov    0x2d(%eax),%ecx
0808dc93 +0x19:  mov    -0xc(%ebp),%eax
0808dc96 +0x1c:  mov    0x29(%eax),%edx
0808dc99 +0x1f:  mov    0xc(%ebp),%eax
0808dc9c +0x22:  mov    %ebx,0x14(%esp)
0808dca0 +0x26:  mov    %ecx,0x10(%esp)
0808dca4 +0x2a:  mov    %edx,0xc(%esp)
0808dca8 +0x2e:  mov    0x10(%ebp),%edx
0808dcab +0x31:  mov    %edx,0x8(%esp)
0808dcaf +0x35:  mov    %eax,0x4(%esp)
0808dcb3 +0x39:  mov    0x8(%ebp),%eax
0808dcb6 +0x3c:  mov    %eax,(%esp)
0808dcb9 +0x3f:  call   0808d272 <_ZN25SDCActiveStatusSyncCommon29getActiveStatusDurationServerEiiiii>  ; SDCActiveStatusSyncCommon::getActiveStatusDurationServer(int, int, int, int, int)
0808dcbe +0x44:  add    $0x34,%esp
0808dcc1 +0x47:  pop    %ebx
0808dcc2 +0x48:  pop    %ebp
0808dcc3 +0x49:  ret
```

## 反编译 C

```c
// SDCActiveStatusSyncCommon::getDuration @ 0x808dc7a

/* SDCActiveStatusSyncCommon::getDuration(ENUM_ACTIVESTATUS, int, void*) */

void __thiscall
SDCActiveStatusSyncCommon::getDuration
          (SDCActiveStatusSyncCommon *this,int param_2,int param_3,int param_4)

{
  getActiveStatusDurationServer
            (this,param_2,param_3,*(int *)(param_4 + 0x29),*(int *)(param_4 + 0x2d),
             *(int *)(param_4 + 0x31));
  return;
}
```
