# onItemLimitEditionLoadData 重构笔记（2026-08-09，待继续）

原版：`_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy`
（0x0808171a，583 条；完整反汇编见 /tmp/itemlimit.txt，重启后需重新导出）

## 签名
- `(const Packet_Item_Limit_Edition_Load_Data_Req* req, Packet_Item_Limit_Edition_Load_Data_Rpy* rpy)`
- h = m_handles[1]（+0x4）

## 流程
1. time(0) → -0x18；memset(0x400 缓冲, 0)
2. if (req->m_fieldF(+0xf)==0 且 req->m_fieldA(+0xa)==0)：
   `memcpy(buf, "and ipg_no ", 0xc)`；`getList2inQuery(req->m_fieldF, &req+0x13, buf+0xb)`
3. set_query(0x4ec7, "seLect ipg_no,item_no,item_cnt,cera_price,gold_price,
   avatar_period_type,total_cnt,sell_cnt,restrict_no,start_time,end_time,npc_idx,
   cond_charac_job,cond_lev_begi...", req->m_fieldB(+0xb), time, time, 0x1c, buf)
   → exec 失败 return 0
4. rpy->m_fieldA(+0xa) = req->m_fieldA；rpy->m_fieldB(+0xb) = get_n_rows()
5. 循环 i（行数）：每行读 ~30 列到 rpy 项（+0xf + i*0x48）：
   getter 混合：0x38=get_uint、0x34=get_int、0x50=get_ubyte、0x48=get_short
   项内偏移：+0xf/+0x13/+0x17/+0x1b/+0x1f/+0x20/+0x30/+0x40（+0x10/+0x20/+0x30 子块）
6. 需要：getList2inQuery 辅助（0x0808167e）、
   Packet_Item_Limit_Edition_Load_Data_Req（+0xa byte/+0xb int/+0xf 列表）、
   Packet_Item_Limit_Edition_Load_Data_Rpy（+0xa byte/+0xb int/+0xf 项[0x48]）

## 依赖
- getList2inQuery(unsigned int count, const unsigned int* list, char* out)（拼接 ",%u"）
