#pragma once

typedef unsigned int uint;

/* Index Buffer Class */
class IndexBuffer
{
private:
	uint m_RendererID;  // ?ID for a specific object
	uint m_count;

public:
	IndexBuffer(const uint* data, uint count);
	~IndexBuffer();

	void Bind() const;
	void Unbind() const;

	inline uint GetCount() const
	{
		return m_count;
	}
};
