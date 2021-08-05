﻿namespace Platform::Collections::Segments::Walkers
{
    template<typename Self>
    class Polymorph
    {
    protected:
        constexpr auto&& self() & { return static_cast<Self&>(*this); }
        constexpr auto&& self() && { return static_cast<Self&&>(*this); }
        constexpr auto&& self() const & { return static_cast<const Self&>(*this); }
        constexpr auto&& self() const && { return static_cast<const Self&&>(*this); }

    public:
        Polymorph() = default;
    };
}
